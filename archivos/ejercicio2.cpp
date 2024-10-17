#include <iostream>

using namespace std;

int main(){
    int n, numBuscado, numNuevo;

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

    if((f = fopen("ejercicio1","rb+")) != NULL){
        bool encontrado = false;
        cout<< "Ingrese el numero a remplazar: " << endl;
        cin>> numBuscado;
        cout<< "Ingrese el numero nuevo: " << endl;
        cin>> numNuevo;

        while(!encontrado && fread(&n, sizeof(int), 1, f)){
            if(n == numBuscado){
                fseek(f, (-1)*sizeof(int), SEEK_CUR);
                fwrite(&numNuevo, sizeof(int), 1, f);
                encontrado = true;
            }
        }
        if(encontrado)
            cout<< "Numero remplazado exitosamente"<< endl;
        else
            cout<< "Numero no encontrado"<< endl;
        fclose(f);
    } else {
        cout<< "Error al abrir el archivo"<< endl;
    }

    if(f = fopen("ejercicio1","rb")){
        cout<< "Numeros ingresados: "<< endl;
        while(fread(&n, sizeof(int), 1, f)){
            cout<< n<< endl;
        }
    }   
}