/* Escribe un programa que lea de la entrada estandar dos numeros y
muestre en la salida estandar su suma, resta multiplicacion y division*/

#include <iostream>

using namespace std;

int main (){
    int n1, n2, suma=0, resta=0, mult=0, div=0;

    cout<<"Digita el primer numero\t"; cin>>n1;
    cout<<"Digita el segundo numero\t"; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1/n2;

    cout<<"\nLa suma es\t"<<suma;
    cout<<"\nLa resta es\t"<<resta;
    cout<<"\nLa multiplicacion es\t"<<mult;
    cout<<"\nLa division es\t"<<div;

    return 0;
}