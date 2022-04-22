#include<iostream>
#include<stdlib.h> //libreria de system("pause")
using namespace std;

int main (){
    int i;
    i=1; //debe inicializarse fuera
    do{
        cout<<i<<endl; //se definen las instrucciones
        i++;
    }while(i<=10); //validamos el ciclo

    system("pause"); //Funciona para evitar que se cierre la ejecucion al terminar
    return 0;
}