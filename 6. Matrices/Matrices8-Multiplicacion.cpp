//Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int a[3][3], b[3][3], c[3][3], multi=0;

    cout<<"Ingrese los datos de la matriz a: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"a ["<<i<<"]["<<j<<"] Ingrese un digito: ";
            cin>>a[i][j];
        }
    }

    cout<<"Ingrese los datos de la matriz b: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"b ["<<i<<"]["<<j<<"] Ingrese un digito: ";
            cin>>b[i][j];
        }
    }

    cout<<"Las matrices son:\n a --\t\t-- b\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<"\t";
        for(int j=0; j<3;j++){
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }

    //Operación
    for(int fila=0; fila<3; fila++){ //El primer bucle corresponde a las filas
        for(int columna=0; columna<3; columna++){ //El segundo a las columnas
           for(int selector=0; selector<3; selector++){ //El tercero itinera como selector del elemento a multiplicar
            multi += a[fila][selector]*b[selector][columna]; 
            //Multiplicamos el elemento seleccionado de la fila de A por el elemento seleccionado de la columna de B
            //Sumamos las 3 multiplicaciones de selecciones ejecutadas.
            }
            c [fila][columna]= multi;//Asignamos la suma de multiplicaciones a la matriz resultante
            multi = 0; //Limpiamos la variable
        }
    }

    cout<<"\nEl resultado de la multiplicacion de las matrices a y b es: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    getch();
    return 0;
}