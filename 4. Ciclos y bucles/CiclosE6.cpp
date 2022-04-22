/*Escriba un programa que calcule x^y, donde tanto x como y 
son enteros positivos, sin utilizar la función pow.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int x, y, resultado=1;
    
    cout<<"Ingrese X y Y:\n "; cin>>x>>y;

    do{
        resultado *= x;
        y--;
    }while (y>0);

    cout<<"El resultado es: "<<resultado<<endl<<endl;

    system("pause");
    return 0;
}