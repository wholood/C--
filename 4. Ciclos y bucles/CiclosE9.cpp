//Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int n, factorial=1;

    cout<<"Ingresa n: ";cin>>n;

    for(int i=1;i<=n;i++){
        factorial*= i;
    }

    cout<<"El factorial es: "<<factorial<<endl;

    system ("pause");
    return 0;
}