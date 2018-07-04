#include <iostream>
using namespace std;

int main() 
{
	
	// char    provedor[50] = "Hola mundo\n";
	int year;


    std::cout << "Ingrese el año\n";
    std::cin >> year;
    std::cout << "\n";
    if (year%4 == 0){
    	if (year%100 != 0){
    		std::cout << "Es bisiesto\n";
    		return 0;
    	}
    	else{
    		if (year%400 == 0){
    			std::cout << "Es bisiesto\n";
    			return 0;
    		}

    	}
    }

	std::cout << "No es bisiesto\n";
    return 0;
}