# include <iostream>

using namespace std;

int main(){
    int opcion;
    cout << "Ingrese la Opción a ejecutar: "; cin >> opcion;

    switch(opcion)
    {
        case 1: cout << "Usted ha seleccionado la opción 1";
        break;
        case 2: cout << "Usted ha seleccionado la opción 2";
        break;
        case 3: cout << "Usted ha seleccionado la opción 3";
        break;
        default: cout << "Usted ha ingresado una opción incorrecta";
    }
    // system("PAUSE"); //Solo ponla si no te da error

    return 0;
}