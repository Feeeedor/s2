#include <iostream>

    struct note{
        double k;
        int numstrok;
        int numstolb;
        note* next;
    };
    
    struct matrix{
    int Nstrok;
    int Nstolb;
    note *first;
    };


    
    int vvodi(int &a);
    int vvodd(double &a);
   matrix *input();
   int copy(note*&arr,note *&arr2);
    int vvod(matrix *M);
    int vvodsize(int &m, int &n);
   int printM(matrix *M);
   int erase(matrix *M);
   int erase(double *arr);
   double* create( matrix *M);
   int find(matrix *M);
   int swap(double &x, double &y);
   int exchange(double*arr, int n);
   int printArr(double*arr, int n);
