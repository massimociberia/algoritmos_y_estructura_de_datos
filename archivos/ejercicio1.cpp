#include <iostream>

using namespace std;

int main(){
    int n;

    cout<< "Ingrese la cantidad de numeros a ingresar: ";
    cin>> n;

    FILE *f;
    for(int i = 0; i < n; i++){
        if(f = fopen("ejercicio1","ab")){
            int num;
            cout<< "Ingrese un numero: ";
            cin>> num;
            fwrite(&num, sizeof(int), 1, f);
            fclose(f);
        }
    }

    if(f = fopen("ejercicio1","rb")){
        cout<< "Numeros ingresados: "<< endl;
        while(fread(&n, sizeof(int), 1, f)){
            cout<< n<< endl;
        }
    }
}