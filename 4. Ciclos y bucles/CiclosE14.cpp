/*Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen.
 
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    int nota,alumnos=1,aprobado=0, ultimo=0;
    int todos_aprobados=0, uno_aprobado=0, ultimo_aprobado=0;

    do{
        cout<<"\nIngrese notas del alumno "<<alumnos<<":\n";
        
        for(int i=1;i<=3;i++){ //Mientras que i sea menor o igual a 3 (numero de examenes)
            cout<<"Nota "<<i<<" "; cin>>nota; //Se lee la nota 1 2 o 3
            if(nota>=10){ //Validamos que haya aprobado (Nota en base 20)
                aprobado++; //De ser asi sumamos 1 a examen aprobado
                if(i==3){   //Validamos que sea el tercer examen
                    ultimo++; //Si es el ultimo entonces lo sumamos para marcar (Intruccion c)
                }
            } 
        }

        if(aprobado == 3){ //Si el alumno tiene los 3 examenes aprobados
            todos_aprobados++; //Sumamos este alumno a la lista de todos los aprobados
        }
        else if (aprobado == 1){ //En caso contrario si aprobo nada mas uno
            uno_aprobado++; //Agregamos este alumno a la lista de los que aprobaron nada mas un examen
        }
        else if (aprobado==1 and ultimo==1){ //Si aprobo nada mas el ultimo examen
            ultimo_aprobado++; //lo sumamos a la lista de los alumnos que solo aprobaron el ultimo
        }

        aprobado = 0; nota = 0; ultimo = 0; //Reiniciamos todas las variables
        alumnos++; //Agregamos 1 para el siguiente alumno.

    }while(alumnos<=5); //El bucle se va a repetir hasta que alumnos sean 5

    //Imprimimos los resultados
    cout<<"\n\nDe los 5 alumnos: \na)Alumnos que aprobaron todos los examenes: "<<todos_aprobados<<endl;
    cout<<"b)Alumnos que aprobaron al menos un examen: "<<uno_aprobado<<endl;
    cout<<"c)Alumnos que aprobaron unicamente el ultimo examen: "<<ultimo_aprobado<<endl;

    getch();
    return 0;
}