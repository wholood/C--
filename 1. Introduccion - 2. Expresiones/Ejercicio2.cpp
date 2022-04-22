/*Escribe un programa que lea la entrada estandar el precio
de un producto y muestre en la salida estandar el precio del
producto al aplicarle el iva*/

#include <iostream>

using namespace std;

int main (){
    float input, iva=0, total=0;

    cout<<"Ingrese su precio sin iva:\t";
    cin>>input;

    iva=input*0.12 ;
    total=input+iva ;
    
    cout<<"Su producto cuesta: "<<total<<"$ con un iva de 12%";

    return 0;
}