/* Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int opc, numero;

    cout<<"Ingrese su numero entero: ";cin>>numero;
    cout<<"Ingrese la opcion \n1.Cubo de un numero \n2.Numero par o impar \n3.salir \n__";cin>>opc;


    switch(opc){
        case 1:
            numero = pow(numero,3);
            cout<<"El resultado es: "<<numero;
            break;
        case 2:
            numero%=2;
            if (numero == 0){
                cout<<"Es par";
            }
            else {
                cout<<"Es impar";
            }
            break;
        case 3:
            break;
        default:
            cout<<"opcion no valida";

    }

    return 0;
}