//Escriba un programa que lea tres números y determine cuál de ellos es el mayor.
#include <iostream>

using namespace std;

int main (){
    int n1, n2, n3;

    cout<<"Inserte 3 numeros: \n";cin>>n1>>n2>>n3;
    
    if (n1!=n2 and n2!=n3 and n1!=n3){
        if (n1>n2 and n1>n3){
            cout<<"el mayor es: "<<n1;
        }
/*otro  else{
            if (n2>n1 and n3){
                cout<<"el mayor es: "<<n2;
            }
            else{
                cout<<"el mayor es: "<<n3;
            }
        }  Podria haber escrito este pedazo de codigo y seria perfectamente valido
        */     
        else if ((n2>n1)&&(n2>n3)){ //Validacion and con operador
            cout<<"el mayor es: "<<n2;
        }
        else{
            cout<<"el mayor es: "<<n3;
        }
        
    }
    else{
        cout<<"Ingrese digitos distintos para comparar";
    }

    return 0;
}