#include <iostream>
using namespace std;

int main() 
{
	
	// char    provedor[50] = "Hola mundo\n";
	int year;


    cout << "Ingrese el año\n";
    cin >> year;
    cout << "\n";

    //  el % te calcula el resto
    if (year%4 == 0){
    	if (year%100 != 0){
    		cout << "Es bisiesto\n";
    		return 0;
    	}
    	else{
    		if (year%400 == 0){
    			cout << "Es bisiesto\n";
    			return 0;
    		}

    	}
    }

	cout << "No es bisiesto\n";
    return 0;
}