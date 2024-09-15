#include <iostream>

using namespace std;

int main(){
    int mes, anio;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el anio: ";   
    cin >> anio;

    switch(mes){
        case 4: case 6: case 8: case 9: case 11:
            cout << "El mes tiene 30 dias" << endl;
            break;
        case 1: case 3: case 5: case 7: case 10: case 12:
            cout << "El mes tiene 31 dias" << endl;
            break;
        case 2:
            if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
                cout << "Febrero tiene 29 dias" << endl;
            }else{
                cout << "Febrero tiene 28 dias" << endl;
            }
            break;
        default:
            cout << "Mes invalido" << endl;
    }
}