#include <iostream>
#include <conio.h>//libreria para funcion getch()
using namespace std;

int main (){
    int i;
    i=0;

    while(i<=10){ //cuenta ascendente
        cout<<i<<endl;
        i++; //sumara uno cada vez que vuelva al ciclo
    }

    while(i>=1){ //cuenta regresiva
        cout<<i<<endl;
        i--; //restara uno cada que vuelva al ciclo
    }

    getch(); //La ejecucion del programa se detiene al precionar una tecla
    return 0;
}