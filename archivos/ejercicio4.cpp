#include <iostream>
#include <stdio.h>

using namespace std;

void apareo(char name1[], char name2[], char name3[]){
    FILE *file1, *file2, *file3;
    int x1, x2;

    file1 = fopen(name1, "rb");
    file2 = fopen(name2, "rb");
    file3 = fopen(name3, "wb");

    while(fread(&x1, sizeof(int), 1, file1) && fread(&x2, sizeof(int), 1, file2)){
        if(x1 < x2){
            fwrite(&x1, sizeof(int), 1, file3);
            fseek(file2, (-1)*sizeof(int), SEEK_CUR);
        } else{
            fwrite(&x2, sizeof(int), 1, file3);
            fseek(file1, (-1)*sizeof(int), SEEK_CUR);
        }
    }
    while (!feof(file1)){
        fwrite(&x1, sizeof(int), 1, file3);
        fread(&x1, sizeof(int), 1, file1);
    }
    while (!feof(file2)){
        fwrite(&x2, sizeof(int), 1, file3);
        fread(&x2, sizeof(int), 1, file2);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    return;
}

int main(){
    FILE *f1, *f2, *f3;
    int n1, n2, n3;

    // cargamos los primeros archivos
    int v1[] = {1,5,6,24,46,87,98};
    f1 = fopen("ejercicio4_1", "wb");
    fwrite(v1, sizeof(int), 7, f1);
    fclose(f1);

    int v2[] = {2,3,6,11,21,49,50,55,90};
    f2 = fopen("ejercicio4_2", "wb");
    fwrite(v2, sizeof(int), 9, f2);
    fclose(f2);

    apareo("ejercicio4_1","ejercicio4_2","ejercicio4_3");

    f3 = fopen("ejercicio4_3","rb");
    while(fread(&n3, sizeof(int), 1, f3)){
        cout<< n3 <<endl;
    }
    fclose(f3);
}