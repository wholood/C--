//Pedir 2 cadenas, indicar si son iguales, si no lo son indicar cual es mayor alfabeticamente

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main (){
    char int1[100], int2[100];

    cout<<"Ingrese la palabra 1\n";
    gets(int1);

    cout<<"Ingrese la palabra 2\n";
    gets(int2);

    if(strcmp(int1,int2)==0){
        cout<<"Las cadenas son iguales \n";
    }
    else if (strcmp(int1,int2) > 0){
        cout<<int1<<" es mayor alfabeticamente respecto a "<<int2<<endl;
    }
    else {
        cout<<int2<<" es mayor alfabeticamente respecto a "<<int1<<endl;
    }

    system ("pause");
    return 0;
}