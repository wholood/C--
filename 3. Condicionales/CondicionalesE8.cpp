/*Escriba un programa que lea de la entrada estándar un carácter 
e indique en la salida estándar si el carácter es una vocal minúscula, 
es una vocal mayúscula o no es una vocal.*/

#include <iostream>

using namespace std;

int main (){
    char letra;
    cout<<"Ingrese un caracter: "; cin>>letra;

    switch(letra){
        case 'a': //No es necesario colocar la misma instruccion
        case 'e': //en cada una de las lineas ya que al no tener
        case 'i': //un break la validacion permite seguir las
        case 'o': //lineas de codigo hasta conseguir el tope.
        case 'u': 
            cout<<"es una vocal minuscula";
            break;
        case 'A':
        case 'E':
        case 'I': 
        case 'O':
        case 'U':
            cout<<"Es una vocal mayuscula";
            break;
        default:
            cout<<"No es una vocal";
            break;
    }

    return 0;
}