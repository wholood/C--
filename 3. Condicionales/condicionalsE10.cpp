/*Escribe un programa que lea de la entrada estándar tres números. 
Después debe leer un cuarto número e indicar si el número coincide 
con alguno de los introducidos con anterioridad.*/

#include<iostream>

using namespace std;

int main (){
    int n1, n2, n3, n4;
    cout<<"Ingresa 3 numeros y el 4to para comparar:\n"; cin>>n1>>n2>>n3>>n4;

    if(n4==n1 or n4==n2 || (n4==n3)){ // or es igual a || como operador
        cout<<"Su numero coincide con uno de los anteriores";
    }
    else{
        cout<<"Su numero no coincide con ninguno anterior";
    }

    return 0;
}