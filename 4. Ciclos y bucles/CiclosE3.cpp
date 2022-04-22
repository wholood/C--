/*Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores que cero.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    int suma=0, cuadrados;

    for(int i=1; i<=10; i++){
        cuadrados=i*i;
        suma += cuadrados;
    }

    cout<<"El resultado es: "<<suma;

    getch();
    return 0;
}