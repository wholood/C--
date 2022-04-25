/*Desarrollar un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/
#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int x, y, cont=0;

    cout<<"Ingrese la cantidad de filas que tendrá la matriz: "; cin>>x;
    cout<<"Ingrese la cantidad de columnas que tendrá la matriz:  "; cin>>y;

    int matriz[x][y];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<"["<<i<<"]["<<j<<"] Ingrese un digito: ";
            cin>>matriz[i][j];
        }
    }

    if (x==y){
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(matriz[i][j] == matriz[j][i]){
                    cont++; //Usamos contador para evitar falsas lecturas en boleano
                }
            }
        } 
    }

    if(cont==x*y){ //Si todos los elementos son iguales el contador equivale al numero de elementos totales dentro de la matriz
        cout<<"Su matriz es simetrica. \n";
    }
    else{
        cout<<"Su matriz no es simetrica.\n";
    }

    getch();
    return 0;
}