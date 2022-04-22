// Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

#include <iostream>
using namespace std;

int main (){
    int n1, n2;

    cout<<"Ingrese dos numeros:\n5"; cin>>n1>>n2; 
    //Encadenando las variables podemos hacer una asignacion doble

    if (n1 != n2){
        if (n1>n2){
            cout<<"El numero "<<n1<<" es mayor a "<<n2;
        }
        else{
            cout<<"El numero "<<n2<<" es mayor a "<<n1;
        }
    }
    else{
        cout<<"Los numeros son iguales.";
    }
        
    return 0;
}