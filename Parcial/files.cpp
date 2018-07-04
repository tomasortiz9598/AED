#include <iostream>
// #include <fstream>
#include <stdio.h>

using namespace std;


struct prod
{
    int cod;
    char *desc;
    int stock;
};


int main() 
{
    const int cantidad = 10;

	prod productos[cantidad];

    FILE * pFile;

    // Creo el vector
    for (int i = 0; i < cantidad; ++i)
    {
        productos[i].cod = (i +6) *2;
        productos[i].desc = "pepito";
        productos[i].stock =  (i +1)*2;

    }


    // Abro el archivo
    pFile = fopen("file.dat","wb");

    // Escribo el vector productos  en el archivo
    fwrite (productos , sizeof(prod), sizeof(productos), pFile);

    // Lo cierro para liberar la memoria
    fclose(pFile);

    //Abro el vector nuevamente
    pFile = fopen("file.dat","rb");

    // Muestro el vector
    for (int i = 0; i < cantidad; ++i)
    {
        cout << productos[i].cod;
        cout << productos[i].desc;
        cout << productos[i].stock;
        cout << "\n";

    }
    // Lo cierro para liberar la memoria
    fclose(pFile);



    return 0;



    
}


