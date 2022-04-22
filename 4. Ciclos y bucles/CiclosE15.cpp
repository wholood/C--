/*Realice un programa que solicite al usuario que piense un número 
entero entre el 1 y el 100. El programa debe generar un numero aleatorio
en ese mismo rango[1-100],e indicarle al usuario si el numero que 
dígito es menor o mayor al numero aleatorio, así hasta que lo 
adivine. y por ultimo mostrarle el numero de intentos que le llevo.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int numero, aleatorio, conteo = 0;

    srand(time(NULL)); //Creará un numero aleatorio
    aleatorio = 1 + rand ()%(100); //Limite inferior + rand ()%(limite superior+1-limite inferior)
    
    cout<<"Numero Aleatorio Generado... Adivina...\n";
    cout<<"Digite un número: ";
    do{
        cin>>numero;
        
        if(numero>aleatorio){
            cout<<"\nDigite un numero menor: ";
        }
        if(numero<aleatorio){
            cout<<"\nDigite un numero mayor: ";
        }
        conteo++;
    }while(numero != aleatorio);

    cout<<"CORRECTO!!\n"; 
    cout<<"Le tomo "<<conteo<<" intentos\n";

    system("pause");
    return 0;
}