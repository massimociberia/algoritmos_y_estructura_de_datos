#include <iostream>

using namespace std;

int main(){
    FILE *f1, *f2, *f3;
    int n1, n2, n3;

    // cargo los archivos
    f1 = fopen("ejercicio3_1", "wb");
    int v1[] = {1,3,5,7,9};
    fwrite(v1, sizeof(int), 5, f1);
    fclose(f1);

    f2 = fopen("ejercicio3_2", "wb");
    int v2[] = {2,4,6,8,10};
    fwrite(v2, sizeof(int), 5, f2);
    fclose(f2);

    f1 = fopen("ejercicio3_1", "rb");
    f2 = fopen("ejercicio3_2", "rb");
    f3 = fopen("ejercicio3_3", "wb");

    while(fread(&n1, sizeof(int), 1, f1) && fread(&n2, sizeof(int), 1, f2)){
        fwrite(&n1, sizeof(int), 1, f3);
        fwrite(&n2, sizeof(int), 1, f3);
    }
    while(!feof(f1)){
        fwrite(&n1, sizeof(int), 1, f3);
        fread(&n1, sizeof(int), 1, f1);
    }
    while(!feof(f2)){
        fwrite(&n2, sizeof(int), 1, f3);
        fread(&n2, sizeof(int), 1, f2); 
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
 
    // Verificamos si guardaron correctamente los datos
    f3 = fopen("ejercicio3_3", "rb");
    while(fread(&n3, sizeof(int), 1, f3)){
        cout<< n3<< endl;
    }
    fclose(f3);
}