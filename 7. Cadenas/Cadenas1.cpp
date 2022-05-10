/*Las cadenas son básicamente arreglos rellenos de caracteres, en este caso char */

#include <iostream>
#include <conio.h>
#include<string.h> //libreria estandar para cadenas de caracteres

using namespace std;

int main (){
    char palabra[] = "Eri"; //char NOMBRE[n de caracteres] = " CADENA ";
    char cadena[] = {'E','r','i'};
    char nombre1[30], nombre2[30], nombre3[30];


    cout<<palabra<<endl;
    cout<<cadena<<endl;
    /*Se pueden declarar las cadenas directamente entre comillas dobles o declararlas como un arreglo 
    caracter por caracter separado por comas y entre comillas simples*/

    cout<<"Digite el nombre completo que será leido por 'CIN': ";
    cin>>nombre1;
    cout<<nombre1<<endl;
    /*Apenas el cin encuentra un espacio deja de guardar la cadena por ende nunca se debe usar*/

    cout<<"Digite el nombre completo que será leido por 'gets': ";
    gets(nombre2);
    cout<<nombre2<<endl;
    /*La funcion gets(variable) sí guarda la cadena con sus espacios pero este no se rige por la cantidad de caracteres 
    establecida por la variable principal. Almacenará la cadena completa ocupando más memoria de la asignada a la variable*/

    cout<<"Digite el nombre completo que será leido por 'cin.getline': ";
    cin.getline(nombre3,30,'\n'); //(VARIABLE, espacio de elementos, cuando terminar)
    cout<<nombre3<<endl;
    /*cin.getline guarda cadenas más precisas sin usar más memoria, determinando la extension y cuándo dejar de registrar*/

    getch();
    return 0;
}