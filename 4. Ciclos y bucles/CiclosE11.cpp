//Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main (){
    int n, suma=0, elevacion=0;

    cout<<"Ingrese n: "; cin>>n;

    for(int i=1;i<=n;i++){
        elevacion = pow(2,i);
        suma +=elevacion;
    }

    cout<<"La suma es igual: "<<suma<<endl;
    
    system("pause");
    return 0;
}