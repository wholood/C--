//Copiar una cadena - strcpy()
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char nombre[] = "Cadena", copia[20];

    strcpy (copia, nombre); 
    //Primero va la cadena vacía y luego de donde vamos a copiar

    cout<<copia<<endl;

    getch();
    return 0;
}