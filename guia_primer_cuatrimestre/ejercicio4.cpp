#include <iostream>

using namespace std;

int main(){
    float x;

    cout << "Ingrese un numero: ";
    cin >> x;

    cout<< "La quinta parte del numeto ingresado es: " << x/5 << endl;
    cout<< "La septima parte del resultade de la division por 5 es: " << (x/5)/7 << endl;
    cout<< "El resto de la division por 5 es: " << (int)x%5 << endl;
}