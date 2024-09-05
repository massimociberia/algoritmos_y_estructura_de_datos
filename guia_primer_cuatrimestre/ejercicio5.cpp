#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "Ingrese un numero: ";
    cin >> x;
    cout << "Ingrese otro numero: ";
    cin >> y;

    if(x > y){
        cout << "El mayor es: " << x << endl;
    }else{
        cout << "El mayor es: " << y << endl;
    }
}