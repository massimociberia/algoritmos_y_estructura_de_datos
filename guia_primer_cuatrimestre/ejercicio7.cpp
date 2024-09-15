#include <iostream>

using namespace std;

int main(){
    int l1, l2, l3;

    cout<< "Ingrese el primer lado: ";
    cin >> l1;

    cout<< "Ingrese el segundo lado: ";
    cin >> l2;

    cout<< "Ingrese el tercer lado: ";
    cin >> l3;

    if((l1 + l2 > l3) || (l1 + l3 > l2) || (l2 + l3 > l1))
        cout<< "Es un triangulo" << endl;
}