#include<iostream>
#include<stdlib.h>

using namespace std; 

int main (){
    int numeros[100][100], filas, columnas;

    cout<<"Ingresa el numero de filas: "; cin>>filas;
    cout<<"Ingresa el numero de columnas: ";cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"["<<i<<"]["<<j<<"]. Ingresa un digito: ";
            cin>>numeros[i][j];
        }
    }

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}