//Hacer un programa que determine si una palabra es polindroma

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char cad[100], aux[100];

    cout<<"Ingrese la palabra a validar ";
    gets(cad);
    strcpy(aux,cad);//Copiamos a una variable auxiliar

    if(strcmp(cad,strrev(aux))==0){ //Validamos si la cadena original con el auxiliar invertido es igual
        cout<<"Su palabra es polindroma\n";
    }
    else{
        cout<<"Al reves es \""<<strrev(cad)<<"\" por ende u palabra NO es polindroma\n"; //si no es entonces:
    }


    getch();
    return 0;
}