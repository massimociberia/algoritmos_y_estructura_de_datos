#include <iostream>

using namespace std;

// Usando un puntero, escriba un programa que encuentre el máximo de un conjunto de enteros que ingresa el usuario. El usuario ingresa al principio el tamaño de la muestra.

int main(){
    int tam, num;
    int *p = NULL;
    int mayor = 0;
    p = new int();

    cout<< "Ingrese la cantidad de numeros a ingresar" <<endl;
    cin>> tam;

    cout<< "Ingrese los numeros del array" <<endl;
    p = new int[tam]();
    for(int i = 0; i < tam; i++){
        cin>> num;
        p[i] = num;
        if(p[i] > mayor)
            mayor = p[i];
    }

    cout<< "Elnumero mayor es: " << mayor <<endl;
    delete []p;

}