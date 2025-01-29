#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

//declaracion del metodo p1
void p1();

//entrada del programa
int main()
{
    //llamada al metodo p1
    p1();
    return 0;
}

//definicion del metodo p1
void p1(){
    int numero1, numero2, resultado;
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero1;
    std::cout<<"Ingrse otro numero: ";
    std::cin>>numero2;
    
    resultado = numero1 + numero2;
    
    std::cout<<"El resultado es "<<resultado;
    
}