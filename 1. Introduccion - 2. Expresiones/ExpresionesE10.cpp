/*Escriba un programa que calcule las soluciones de una ecuación de segundo grado 
de la forma ax^2 + bx + c = 0, teniendo en cuenta la resolvente*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){
    double a, b, c, xp=0, xn=0;

    cout<<"Organizando su ecuacion en la forma ax'2+bx+c=0 indique los valores correspondientes\n";
    cout<<"Ingrese a: ";cin>>a;
    cout<<"Ingrese b: ";cin>>b;
    cout<<"Ingrese c: ";cin>>c;

    xp=(-b+(sqrt(pow(b,2)-4*a*c))/2*a);
    xn=(-b-(sqrt(pow(b,2)-4*a*c))/2*a);

    cout<<"El primer resultado de x es: "<<xp<<" y el segundo es: "<<xn;

    return 0;
}