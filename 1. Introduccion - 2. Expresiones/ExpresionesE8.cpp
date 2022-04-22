/*Escriba un programa que lea de la entrada estándar los dos catetos
de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.

c'2= a'2+b'2*/

#include <iostream>
#include <math.h> //libreria para funciones matematicas y trigonometricas avanzadas

using namespace std;

int main (){
    float a, b, c=0;
    
    cout<<"Ingrese el valor del primer cateto: "; cin>>a;
    cout<<"Ingrese el valor del segundo cateto: "; cin>>b;

    c=sqrt(pow(a,2)+pow(b,2)); //sqrt sirve para sacar las raices cuadradas y pow las potencias (base, exponente)

    cout.precision(5);
    cout<<"\nEl valor de la hipotenusa es: "<<c;

    return 0;
}