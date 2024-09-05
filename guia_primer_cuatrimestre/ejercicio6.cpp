#include <iostream>

using namespace std;

int main(){
    int fechaUno, fechaDos;

    cout<< "Ingrese una fecha en formato AAAAMMDD: ";
    cin >> fechaUno;

    cout<< "Ingrese otra fecha en formato AAAAMMDD: ";
    cin >> fechaDos;

    if(fechaUno > fechaDos){
        cout<< "La fecha mayor es: " << fechaUno << endl;
    }else{
        cout<< "La fecha mayor es: " << fechaDos << endl;
    }
}