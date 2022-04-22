/*Realice un programa que solicite de la entrada estándar un entero del 1 al 10 
y muestre en la salida estándar su tabla de multiplica*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int n;

    do{
        cout<<"Digite su numero: ";cin>>n;
    }while(n<1 or n>10);

    for (int i=1; i<=10 ; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    
    cout<<"\n\n";
    system("pause");
    return 0;
}