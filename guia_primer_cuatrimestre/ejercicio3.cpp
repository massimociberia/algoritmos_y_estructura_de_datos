#include <iostream>

using namespace std;

int main(){
    int fecha;

    cout<< "Ingrese la fecha en formato AAAAMMDD: " <<endl;
    cin>>fecha;

    cout<< "El anio ingresado es: " << fecha / 10000 <<endl;
    cout<< "El mes ingresado es: " << (fecha % 10000) / 100 <<endl;
    cout<< "El dia ingresado es: " << fecha % 100 <<endl;
}