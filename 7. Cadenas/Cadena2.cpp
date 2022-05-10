//Longitud de cadenas y la funcion strlen(VARIABLE)

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[] = "Hola";
    int longitud=0; //la funcion strlen() devuelve un valor entero

    longitud = strlen(palabra);
    // esta funcion guardará la extension en la variable de asignacion
    cout<<"El numero de elementos de la cadena es "<<longitud<<endl;
    
    getch();
    return 0;
}