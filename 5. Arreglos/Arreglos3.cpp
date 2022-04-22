#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int n[100], extension;
    cout<<"ingresa la extencion de nuestra array:  ";
    cin>>extension;

    for(int i=0; i<extension; i++){
        cout<<"Ingrese el digito:  ";
        cin>>n[i];
    }

    for(int i=0; i<extension; i++){
        cout<<i<<" -> "<<n[i]<<endl;
    }

    getch();
    return 0;
}