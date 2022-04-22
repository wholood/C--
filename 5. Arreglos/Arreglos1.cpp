#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){

    int numero []={1,2,3,4,5}, suma=0;

    for (int i=0; i<5; i++){
        suma += numero[i];
    }
    
    cout<<"La suma de todos los elementos es: "<<suma<<endl;

    system("pause");
    return 0;
}