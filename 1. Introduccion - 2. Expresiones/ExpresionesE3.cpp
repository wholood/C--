#include <iostream>

using namespace std;

int main (){
    float a, b, c, d, e, f, result=0;

// Ejercicio 3

    cout<<"Ingresa valor a: \t"; cin>>a;
    cout<<"Ingresa valor b: \t"; cin>>b;
    cout<<"Ingresa valor c: \t"; cin>>c;
    cout<<"Ingresa valor d: \t"; cin>>d;
    cout<<"Ingresa valor e: \t"; cin>>e;
    cout<<"Ingresa valor f: \t"; cin>>f;

    result= (a+(b/c))/(d+(e/f));

    cout.precision(2);
    cout<<"\nEl resultado de la expresion (a+(b/c))/(d+(e/f)) es: \t"<<result;

// Ejercicio 4
    cout<<"\n ------ SEGUNDA EXPRESION ----- ";

    cout<<"\nIngresa valor a: \t"; cin>>a;
    cout<<"Ingresa valor b: \t"; cin>>b;
    cout<<"Ingresa valor c: \t"; cin>>c;
    cout<<"Ingresa valor d: \t"; cin>>d;

    result= a+(b/(c-d));

    cout.precision(2);
    cout<<"\nEl resultado de la expresion result= a+(b/(c-d)) es: \t"<<result;
    
    return 0;
}