//Escribe un programa que defina un vector de números y 
//calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int numero [100], n, mayor=0, suma=0;

    cout<<"Ingrese el numero de elementos que tendra el arreglo: ";
    cin>>n;

    for (int i=0; i<n; i++){
        cout<<i+1<<". Digite un numero: "; 
        cin>>numero[i];
        
        if(numero[i]>mayor){
            mayor = numero[i];
        }
        suma += numero [i];
    }  
        
    if (mayor==suma-mayor){
        cout<<"\nEl elemento equivalente a la suma del resto de elementos del arreglo es: "<<mayor<<endl;
    }
    else{
        cout<<"Ningun elemento cumple las condiciones"<<endl;
    }

    system("pause");
    return 0;
}