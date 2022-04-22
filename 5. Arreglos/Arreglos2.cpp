#include<iostream>
#include<stdlib.h>
using namespace std;

int main (){
    int n[]={2,4,6,8}, m=1;

    for(int i=0; i<4; i++){
        m *= n[i];
    }
    
    cout<<"La multiplicacion de los elementos es: "<<m<<endl;
    
    system("pause");
    return 0;
}