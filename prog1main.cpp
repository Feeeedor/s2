#include <iostream>
#include "prog1.h"


int main(){
    
matrix *M;

M=input();


printM(M);
double *arr;
arr=create(M);
printArr(arr, M->Nstolb);
erase(M);
erase(arr);
    return 0;
}