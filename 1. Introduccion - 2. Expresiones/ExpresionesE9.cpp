/*Realice un programa que calcule el valor que toma la siguiente 
función para unos valores dados de x e y: ver foto*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float x, y, f=0;

    cout<<"Ingrese x: "; cin>>x;
    cout<<"Ingrese y: "; cin>>y;

    f=(sqrt(x))/(pow(y,2)-1);

    cout.precision(3);
    cout<<"El valor que toma la funcion es: "<<f;


    return 0;
}