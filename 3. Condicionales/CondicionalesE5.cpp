#include <iostream>

using namespace std;

int main (){
    int n;
    cout<<"ingrese un numero: ";cin>>n;

    if (n==0){
        cout<<"El numero es igual a cero ";
    }
    else if(n%2==0){
        cout<<"El numero es par";
    }
    else {
        cout<<"El numero es impar";
    }

    return 0;
}