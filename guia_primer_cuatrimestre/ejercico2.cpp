#include <iostream>

using namespace std;

int main(){
    int anio, mes, dia;
    int fecha;

    cout<< "Ingrese el anio: " <<endl;
    cin>>anio;
    cout<< "Ingrese el mes: " <<endl;
    cin>>mes;
    cout<< "Ingrese el dia: " <<endl;
    cin>>dia;

    fecha = anio * 10000 + mes * 100 + dia;

    cout<< "La fecha ingresada es: " << fecha <<endl;
}