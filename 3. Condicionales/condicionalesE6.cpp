#include <iostream>

using namespace std;

int main (){
    float n; //Definimos variable

    cout<<"Ingrese un numero "; cin>>n; //Le pedimos al usuario que introduzca el valor

    if (n > 0 or n == 0){ //Si (n es mayor a 0 o n es igual a 0) entonces
        cout<<"su numero es positivo"; 
    }
    else{ //en caso contrario
        cout<<"su numero es negativo";
    }

    return 0;
}