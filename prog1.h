#include <iostream>
namespace prog1{
    struct note{
        double k;
        int numstrok;
        int numstolb;
    };
    
    struct matrix{
    int Nstrok;
    int Nstolb;
    note *arr;
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
   // int printM(matrix *M);
}