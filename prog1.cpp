#include <iostream>
#include "prog1.h"

template <class T>
int getNum(T &a){
    std::cin>>a;
    if(!std::cin.good())
    return -1;
    return 1;
}
