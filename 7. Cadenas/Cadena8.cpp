//Crear una cadena con "hola que tal", preguntar el nombre y agregarlo a una segunda cadena
//por ultimo concadenar ambas para crear un saludo

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
    char saludo [] = "Hola que tal ", name[100];

    cout<<"Ingrese su nombre: \n";
    gets(name);

    strcat(saludo, name);

    cout<<saludo<<endl;

    system("pause");
    return 0;
}