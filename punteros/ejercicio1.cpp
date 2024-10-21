#include <iostream>

using namespace std;

// Escriba un programa que, utilizando aritmética de punteros, tome 5 elementos enteros en un array y luego los muestre en pantalla
int main(){
    int v[5];
    int *p;
    p = v;

    for(int i = 0; i < 5; i++){
        int num = 0; 
        cout<< "ingrese un num: " <<endl;
        cin>>num;
        *(p+i) = num;
    }

    cout<< "Valores ingresados" <<endl;
    for(int i = 0; i < 5; i++){
        cout<< *(p+i) <<endl;
    }
}