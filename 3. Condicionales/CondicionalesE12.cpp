//Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.

#include <iostream>
using namespace std;

int main (){
    char opc;
    float saldo=1000, ingreso, retiro;

    cout<<"\t//Bienvenido a su cajero automatico// \n";
    cout<<"a.Ingreso \nb.Retiro \nc.Salir\n";cin>>opc;

    switch(opc){
        case 'a':
        case 'A':
            cout<<"Cuanto ingresara?\t";cin>>ingreso;
            saldo += ingreso;
            cout<<"Su saldo disponible ahora es: "<<saldo;
            break;
        case 'b':
        case 'B':
            cout<<"Cuanto retirara?\t";cin>>retiro;
            if (retiro>saldo){
                cout<<"Su saldo no es suficiente";
            }
            else{
                cout<<"Su saldo actual es: "<<saldo<<endl;
                saldo-=retiro;
                cout<<"Efectuado el retiro restarian: "<<saldo;
            }
            break;
        case 'c':
        case 'C':
            break;
        default:
            cout<<"Ingrese una opcion valida";
            break;
    }

    return 0;
}