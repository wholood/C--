/*La calificación final de un estudiante es la media ponderada de tres notas: 
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% 
y la nota de participación que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y 
escriba en la salida estándar su nota final.*/

#include <iostream>

using namespace std;

int main (){
    float prac, teo, part, fin = 0;

    cout<<"Ingresa nota de la practica: "; cin>>prac;
    cout<<"Ingresa nota de la teoria: "; cin>>teo;
    cout<<"Ingresa nota de participacion: "; cin>>part;

    prac*=0.30;
    teo*=0.60;
    part*=0.10;

    fin=prac+teo+part;

    cout<<"\nLa nota final es: "<<fin;

    return 0;
}