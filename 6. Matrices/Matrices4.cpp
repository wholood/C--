/*Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.*/

#include <iostream>
#include <stdlib.h>
#include <time.h> //Para generar el numero aleatorio

using namespace std;

int main (){
    int x, y;
    srand(time(NULL));//Generamos el numero aleatorio

    cout<<"Ingrese la cantidad de filas que tendrá la matriz: "; cin>>x;
    cout<<"Ingrese la cantidad de columnas que tendrá la matriz:  "; cin>>y;

    int matriz[x][y], copia[x][y]; //Declaramos la matriz y su copia

    //Rellenamos la matriz con numeros del 1 al 100
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            matriz[i][j] = 1+rand()%(100-1); //Lo establecemos en un rango de 1 a 100 en nuestro elemento
        }
    }

    //Copiamos e imprimimos la nueva matriz
    cout<<"\nLa copia de la matriz generada con numeros del 1 al 100 es: \n";
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            copia[i][j]=matriz[i][j]; //Copia

            cout<<copia[i][j]<<" "; //Imprime
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}