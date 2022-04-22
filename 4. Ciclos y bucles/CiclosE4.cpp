/*Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    float temp, max=0, min=999,media=0;
    //Temp registra la temperatura actual
    //Max se refiere a la temperatura maxima alcanzada y sera validada cada 4h
    //Min se refiere a la temperatura minima alcanzada, se inicializa en 999 para tener una referencia del primer registro
    //Media sera para almacenar las sumas y el promedio del dia

    for (int i=0; i<24; i+=4){ //Como sera en un plazo de 24h mientras i sea menor que 24 entra al bucle, y se van adicionando 4 por cada 4h
        cout<<"Ingrese la temperatura actual: ";cin>>temp; cout<<"\n";

        if(temp>max){ //Si la temperatura es mayor a la maxima registrada esta sera la nueva maxima
            max = temp;
        }
        if(temp<=min){ //Si la temperatura es menos a la minima registrada esta sera la nueva minima
            min = temp;
        }

        media += temp; //adicionamos la temperatura actual a la media siempre que se cumpla el bucle
    }

    media /= 6;// dividimos la media entre 6 que son la cantidad de ciclos que cumplio de registro (6 temp al dia)
    cout<<"La minima temperatura fue: "<<min<<endl; //imprimimos
    cout<<"La maxima temperatura fue: "<<max<<endl;
    cout<<"Y la media fue: "<<media<<endl;

    system("pause"); //evitamos el cierre repentino de la ejecucion
    return 0;
}