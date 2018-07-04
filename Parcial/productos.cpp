#include <iostream>
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
    int max = 0;
    int min;
    int size;
    int stockTotal = 0 ;
	prod productos[cantidad];


    // Creo el vector
    for (int i = 0; i < cantidad; ++i)
    {
        productos[i].cod = (i +6) *2;
        productos[i].desc = "pepito";
        productos[i].stock =  (i +1)*2;

    }


    // Lo empiezo a recorrer
    min = productos[1].stock ;
    for (int i = 0; i < cantidad; ++i){
        if (productos[i].stock > max)
            max = productos[i].stock;
        if (productos[i].stock < min)
            min = productos[i].stock;
        stockTotal = stockTotal +  productos[i].stock;

    }

    
    //Saco el tamaño del vector
    size =  (sizeof(productos)/sizeof(*productos)) ;

    // MUESTRO LOS RESULTADOS
    std::cout << "El producto con mayor stock es: ";
    std::cout << max;
    std::cout << "\n";

    std::cout << "El producto con menor stock es: ";
    std::cout << min;
    std::cout << "\n";

    std::cout << "La cantidad de productos en stock es: ";
    std::cout << size;
    std::cout << "\n";

    std::cout << "La promedio de stock es: ";
    std::cout << stockTotal / size;
    std::cout << "\n";




}


