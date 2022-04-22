//Operadores de comparacion, explicacion a partir de condicionales dobles

#include <iostream>

using namespace std;

int main (){
    int numero, dato = 5; //= es operador de asignacion

    cout<<"Digite un numero: "; cin>>numero;

    if(numero == dato){ //== es operador de igualdad
        cout<<"El numero es 5";
    }
    else{
        cout<<"El numero es distinto a 5";
    }

    if(numero != dato){ //!= es operador de igualdad
        cout<<"El numero es distinto a 5";
    }
    else{
        cout<<"El numero es 5";
    }

    if(numero > dato){ //> mayor que
        cout<<"El numero es mayor que 5";
    }
    else{
        cout<<"El numero es menor a 5";
    }

    if(numero >= dato){ //=> mayor o igual a
        cout<<"El numero es mayor o igual a 5";
    }
    else{
        cout<<"El numero menor a 5";
    } 
    return 0;
}