/*Hacer un programa que lea 5 números en un arreglo, 
los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int  input[4], output[4];

    //Lectura de datos del primer array
    for(int i=0; i<5; i++){
        cout<<i+1<<". Ingrese un digito: ";
        cin>>input[i];
    }

    //Previa impresion de la salida
    cout<<"El resultado del nuevo array es: ";

    //Copia e impresion instantanea de cada nuevo elemento para la salida
    for(int i=0; i<5; i++){
        output[i]=input[i]*2;

        cout<<output[i]<<" ";
    }

    getch();
    return 0;
}