//Pedir una cadena, almacenarla y luego copiarla a un segundo arreglo
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main (){
    char input[100], copy[100];

    cout<<"Ingrese la cadena a copiar: ";
    gets(input);
    strcpy (copy, input);

    cout<<copy<<endl;

    system("pause");
    return 0;
}