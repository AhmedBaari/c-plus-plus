#include <iostream>
using namespace std;

int demo () {
    int *t = new int;
    *t = 5;
    float *f = new float[5];
    f[0] = 1.0;

    delete t;
    delete[] f;
}

int main (){
    int *iptr;
    iptr = new int;
    *iptr = 5;

    float *f = new float[5];

    int i;
    for (i = 0; i < 5; i++) {
        cin >> f[i];
    }

    delete iptr;
    delete[] f;
}