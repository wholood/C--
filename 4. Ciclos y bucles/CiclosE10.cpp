/*Escriba un programa que calcule el valor de: 
1!+2!+3!+...+n! (suma de factoriales).*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int n, factorial=1, suma=0;

    cout<<"Ingrese n: ";cin>>n;

    /*do{  //Solucion larga
        for(int i=1;i<=n;i++){ //Sacamos el factorial de cada numero
            factorial*= i;
        }
        suma+=factorial; //Sumamos el resultado
        factorial=1; //Reestablecemos como 1 el resultado
        n--; //Restamos 1 a n para sacar el siguiente factorial
    }while(n>0);*/
    
	for(int i=1;i<=n;i++){ //Solucion corta
		factorial *= i; //primero sacamos los factoriales
		suma +=factorial; //luego los sumamos
	}
        
    cout<<"La suma de los factoriales es: "<<suma<<endl;

    getch();
    return 0;
}