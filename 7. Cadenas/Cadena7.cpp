//Concadenar cadenas strcat()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char cad1[]="Esto es una cadena ", cad2[]= "de ejemplo", cad3[50];

    strcpy(cad3, cad1); //Igualamos con la primera cadena
    strcat(cad3,cad2); //Añade al final de la cadena X la cadena Y

    cout<<cad3<<endl;

    getch();
    return 0;
}