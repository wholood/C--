#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int numero [100], n, mayor=0;

    cout<<"Ingrese el numero de elementos que tendra el arreglo: ";
    cin>>n;

    for (int i=0; i<n; i++){
        cout<<i+1<<". Digite un numero: "; 
        cin>>numero[i];

        if(numero[i]>mayor){
            mayor = numero[i];
        }
    }

    cout<<"\nEl elemento mayor del arreglo es: "<<mayor<<endl;

    system("pause");
    return 0;
}