/*Realiza un programa que defina dos vectores de caracteres y después almacene el contenido 
de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer 
vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo 
vector en la salida estándar.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    char letras1 []={'a','b','c','d','e'};
    char letras2 [] = {'f','g','h','i','j'};
    char letras3 [10];

    //Copiamos los arreglos sabiendo que letras 2 pertenece al segundo bloque (de 10 caracteres a partir del 5to es letras 2)
    for(int i=0;i<5;i++){
        letras3[i] = letras1[i];
        letras3[i+5] = letras2[i]; 
        //i va de 0 a 5, por ende para copiar los lementos debemos sumar 5 a i 
        //i 0 = elemento 0 de letras2 = elemento 5 de letras 3
    }

    for(int i=0;i<10;i++){
        cout<<letras3[i]<<", ";
    }

    getch();
    return 0;
}