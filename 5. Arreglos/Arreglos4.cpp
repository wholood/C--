//Escribe un programa que defina un vector de números y muestre en la salida estándar el 
//vector en orden inverso—del último al primer elemento.


#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int n[100], extension;
    cout<<"ingresa la extencion de nuestra array:  ";
    cin>>extension;

    for(int i=0; i<extension; i++){
        cout<<"Ingrese el digito:  ";
        cin>>n[i];
    }

    for(int i=extension-1; i>=0; i--){
        cout<<i<<" -> "<<n[i]<<endl;
    }

    getch();
    return 0;
}