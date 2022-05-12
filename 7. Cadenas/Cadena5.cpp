//Comparar cadenas con strcmp()
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char palabra[] = "Hola", ej1[] = "Hola", ej2[] = "hola", ej3[] = "Avion";

    //la funcion de comparacion se usa principalmente para condicionales

    if(strcmp(palabra, ej1)==0){ // Siempre que sean iguales el valor de strcmp será 0
        cout<<"La cadena con el ejemplo 1 son iguales\n";
    }
    if(strcmp(palabra, ej2)==1 or strcmp(palabra, ej2)!= 0){
        cout<<"La cadena con el ejemplo 2 son distintas\n";
    }


    //también podemos validar si son mayores alfabeticamente A<B

    if(strcmp(palabra, ej3) > 0){ //El resultado de la comparación es mayor a 0 cuando palabra es mayor a ej3
        cout<<palabra<<" esta despues alfabeticamente de "<<ej3<<endl;
    }

    if(strcmp(ej3, palabra) < 0){ //El resultado de la comparación es menor a 0 cuando ej3 es menor a palabra
        cout<<ej3<<" esta antes alfabeticamente de "<<palabra<<endl;
    }

    getch();
    return 0;
}