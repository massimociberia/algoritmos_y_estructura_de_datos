#include <iostream>

using namespace std;

// Modifique la solución anterior para mostrar los números en orden inverso
int main(){
    int v[5];
    int *p;
    p = v;

    for(int i = 0; i < 5; i++){
        int num; 
        cout<< "ingrese un num: " <<endl;
        cin>>num;
        *(p+i) = num;
    }

    cout<< "Valores ingresados" <<endl;
    for(int i = 4; i >= 0; i--){
        cout<< *(p+i) <<endl;
    }
}