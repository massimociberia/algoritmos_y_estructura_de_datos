#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int *x;
    int *y;
    int i;
    i = 10;
    x = &i;

    *x = *y + 1;     
    cout << *x << endl;

    *y = *x + 1;     
    cout << i << endl;

    y = new int;
    *y = *x / 2;

    cout << *y << endl;
    cout << *x << endl;

    delete y;
    getch();        
    return 0;
}
