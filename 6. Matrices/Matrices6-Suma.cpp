//Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int a[3][3], b[3][3], c[3][3];

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

    cout<<"Las matrices son:\n a --\t-- b\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\t";
        for(int j=0; j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"\nEl resultado de la suma de las matrices a y b es: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c [i][j]= a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}