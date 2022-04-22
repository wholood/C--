#include <iostream>

using namespace std;

int main () {
    float a, b, c, d, result=0; //todas las variables necesarias

//Ejercicio 1 

    cout<<"Ingresa valor a: \t"; cin>>a;
    cout<<"Ingresa valor b: \t"; cin>>b;

    result=(a/b)+1;
    
    cout.precision(2);//limita los decimales a dos digitos
    cout<<"\nEl resultado de la expresion a/b+1 es: "<<result;

//Ejercicio 2

    //se reasignan las mismas variables para ahorrar codigo
    cout<<"\nIngrese valor a de la segunda expresion: \t"; cin>>a; 
    cout<<"Ingrese valor b de la segunda expresion: \t"; cin>>b;
    cout<<"Ingrese valor c de la segunda expresion: \t"; cin>>c;
    cout<<"Ingrese valor d de la segunda expresion: \t"; cin>>d;

    result=(a+b)/(c+d);

    cout.precision(2); //limita los decimales a dos digitos
    cout<<"\nEl resultado de la expresion (a+b)/(c+d) es: "<<result;

    return 0;
}