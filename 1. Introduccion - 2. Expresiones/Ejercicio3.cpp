/*Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include <iostream>

using namespace std;

int main () {
    int edad;
    char gen [10];
    float alt;

    cout<<"Ingrese su edad: \t"; cin>>edad;
    cout<<"Ingrese su genero: \t"; cin>>gen;
    cout<<"Ingrese su altura en metros: \t"; cin>>alt;

    cout<<"\nEdad: "<<edad<<"\nGenero: "<<gen<<"\nAltura: "<<alt<<"m";
    
    return 0;
} 