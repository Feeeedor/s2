#include <iostream>
namespace prog1{
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
    template <class T>
    
        int getNum(T &a){
    std::cin>>a;
    if(!std::cin.good())
    return -1;
    return 1;
}
    
   matrix *input();
   int copy(note*&arr,note *&arr2);
    int vvod(matrix *&M);
    int vvodsize(int &m, int &n);
   int printM(matrix *M);
   int erase(matrix *&M);
   int erase(double *&arr);
   double* create( matrix *M);
   int find(matrix *&M);
}