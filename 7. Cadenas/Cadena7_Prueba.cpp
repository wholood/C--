//Concadenar cadenas strcat()

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main (){
    string name = "Eri", lastname = "Reis", fullname = name.append(lastname);

    cout<<fullname;

    getch();
    return 0;
}