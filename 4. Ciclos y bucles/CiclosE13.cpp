//Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n  
#include<iostream>
#include<stdlib.h>
using namespace std;

int main (){
    int n, x=0,y=1,z=1;
    cout<<"Digite n: ";cin>>n;

    for(int i=1;i<=n;i++){
        cout<<z<<" "; // 1 1 2 3 5 8 ....
        z=x+y; //z=0+1 ~ 1/ 1+1 ~ 2 / 1+2 ~ 3 / 2+3 ~ 5 / 3+5 ~ 8...
        x=y; //~1 ~1 ~2 ~3 ~5
        y=z; //~1 ~2 ~3 ~5 ~8
    }
    cout<<endl;
    system("pause");
    return 0;
}