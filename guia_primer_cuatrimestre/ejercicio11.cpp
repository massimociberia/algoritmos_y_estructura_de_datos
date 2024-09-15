#include <iostream>

using namespace std;

int main(){
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if(edad <= 12){
        cout << "menor" << endl;
    }else if(edad >= 13 && edad <= 18){
        cout << "caudete" << endl;
    }else if(edad >= 19 && edad <= 26){
        cout << "joven" << endl;
    }else if(edad >= 27){
        cout << "mayor" << endl;
    }
}