//Invertir una cadena - strrev()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
    char cad[]="Eri";
    strrev(cad); //Invierte la cadena
    
    cout<<cad<<endl;

    getch();
    return 0;
}