/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es 
aquella en la que la columna i era la fila i de la matriz original.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int matriz[3][3];

    for(int i; i<3; i++){
        for(int j; j<3; j++){
            cout<<"["<<i<<"]["<<j<<"] Ingrese un digito: ";
            cin>>matriz[i][j];
        }
    }

    cout<<"La matriz es: \n";
    for(int i; i<3; i++){
        for(int j; j<3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Y su transpuesta es: \n";
    for(int i; i<3; i++){
        for(int j; j<3; j++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}

