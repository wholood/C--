/*Escriba un programa que lea valores enteros hasta que se 
introduzca un valor en el rango [20-30] o se introduzca el 
valor 0. El programa debe entregar la suma de los valores 
mayores a 0 introducidos.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int numero, suma;

    do{
        cout<<"Digite un numero: "; cin>>numero;
        
        if(numero>0){
            suma+=numero;
        }
    }while( (numero<20 or numero>30) and numero !=0);

    cout<<"suma es: "<<suma;
    
    system("pause");
    return 0;
}