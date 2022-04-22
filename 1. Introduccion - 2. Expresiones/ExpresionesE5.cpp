//Escriba un fragmento de programa que intercambie los valores de dos variables.

#include<iostream>

using namespace std;

int main (){

    float a, b, c;

    cout<<"Ingrese a\t"; cin>>a;
    cout<<"\nIngrese b\t"; cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"El valor de a ahora es: "<<a<<"\nY el valor de b ahora es: "<<b;

    return 0;
}