#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

//declaracion del metodo p2
void p2();

//metodo de entrada del programa
int main()
{
    //llamada al metodo p2
    p2();
    return 0;
}

//definición del metodo p2
void p2(){
    int n1, resultado;
    std::cout<<"Ingrese un numero: ";
    std::cin>>n1;
    
    resultado = n1 * 2;
    
    std::cout<<"El doble del numero es "<<resultado;
    
}
