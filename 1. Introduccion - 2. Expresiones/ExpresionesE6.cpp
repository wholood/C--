//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include <iostream>

using namespace std;

int main () {
    float a, b, c, d, prom=0;

    cout<<"Ingrese la nota del primer alumno: ";cin>>a;
    cout<<"\nIngrese la nota del segundo alumno: ";cin>>b;
    cout<<"\nIngrese la nota del tercer alumno: ";cin>>c;
    cout<<"\nIngrese la nota del cuarto alumno: ";cin>>d;

    prom=(a+b+c+d)/4;

    cout.precision(2);
    cout<<"\nEl promedio es: "<<prom;

    return 0;
}
