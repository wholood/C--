/*Programa que pida al usuario una cadena de caracteres, verificar la longitud y 
si esta supera a 10 caracteres mostrarla en pantalla, en caso contrario no mostrarla*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char cadena[1000];

    cout<<"Ingrese su cadena: ";
    gets(cadena);

    if(strlen(cadena)>10){
        cout<<cadena<<endl;
    }
    else{
        cout<<"Su cadena no supera el minimo de caracteres";
    }

    system("Pause");
    return 0;
}