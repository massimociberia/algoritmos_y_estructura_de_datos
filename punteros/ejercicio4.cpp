#include <iostream>

using namespace std;

// Escriba un subprograma que ordene un array, el tamaño del array lo define el usuario y luego ingresa sus elementos. Debe hacerse todo a través del uso de punteros:

int *ordenarAsendente(int *p, int tam){
    int i, j;

    for(i = 0; i < tam; i++){
        for(j = i + 1; j < tam; j++){
            if(*(p+j) < *(p+i)){
                int temp = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = temp;
            }
        }
    }
    return p;
}

int main(){
    int tam, num;
    int *p = NULL;
    p = new int();

    cout<< "Ingrese el tamanio del array: " <<endl;
    cin>> tam;
    p = new int[tam];
    cout<< "Ingrese cada uno de los elementos" <<endl;
    for(int i = 0; i < tam; i++){
        cin>> num;
        p[i] = num;
    }

    cout<< "El vector ordenado es: " <<endl;
    int *punt = ordenarAsendente(p,tam);
    for(int i = 0; i < tam; i++)
        cout<< *(p+i) <<endl;
    delete []p;
}