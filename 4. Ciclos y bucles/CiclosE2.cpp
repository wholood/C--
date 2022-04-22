/*Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. 
En ese momento el programa debe terminar y mostrar en la salida 
estándar el número de valores mayores que cero leídos.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int n=0, valores=0;

    do{
        cout<<"Ingrese el numero: ";cin>>n; //Ingresamos el numero
        valores++; //Agregamos 1 al contador de valores

    }while(n!=0); //Validamos que el numero ingresado no sea 0

    cout<<"\nSe leyeron "<<valores-1<<" valores mayores que cero\n\n"; 
    //En la impresion quitamos 1 a valores ya que este almacenara el conteo incluyendo el 0

    system("pause");
    return 0;
}
