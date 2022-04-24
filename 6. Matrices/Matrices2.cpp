/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que 
muestre la diagonal principal de la matriz.

No pedia solicitar la matriz pero lo hice para seguir practicando jijija*/

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main (){
    int x; //Numero de filas y columnas de la matriz cuadrada 

    cout<<"Ingresa el numero que conformará las filas y columnas de nuetsra matriz cuadrada: ";
    cin>>x; //Se ingresa 3 y este conformara las 3 columnas y 3 filas.

    int numeros[x-1][x-1]; //Declaramos la matriz a partir de las filas y columnas dadas.

    //Solicitamos los elementos de nuestra matriz elemento por elemento
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            cout<<"["<<i<<"]["<<j<<"]. Ingresa un digito: ";
            cin>>numeros[i][j];
        }
    }

    //Imprimimos la grafica de la matriz
    cout<<"La matriz es: \n";
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            cout<<numeros[i][j];
        }
        cout<<endl;
    }

    //Imprimimos la diagonal
    cout<<"Y la diagonal principal es: \n";
    
    for(int i=0; i<x; i++){ //Comenzamos a seleccionar las filas
        for(int j=0; j<x; j++){ //Se selecciona un elemento de esa fila
            if(i==j){ //Comparamos si las filas y columnas son un valor igual
               cout<<numeros[i][j]; //Imprimimos de ser cierto
            } 
            else{ //Si es falso marcamos un espacio
                cout<<" ";
            }
        }
        cout<<endl; //Enter para separar filas
    }

    system("pause");
    return 0;
}