#include <iostream>
#include "prog1.h"

using namespace prog1;
int main(){
matrix *M;

M=input();


printM(M);
double *arr;
arr=create(M);
erase(M);
erase(arr);
    return 0;
}