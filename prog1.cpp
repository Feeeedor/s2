#include <iostream>
#include "prog1.h"
using namespace prog1;

template <class T>
/*
int getNum(T &a){
    std::cin>>a;
    if(!std::cin.good())
    return -1;
    return 1;
}*/

int input(){

const char* pr="";
int m;
do{
    std::cout<<pr<<":\n";
    std::cout<<"Enter number of lines: -->";
    pr="You are wrong; repeat please!";
    if(getNum(m)<0)
    return NULL;
}while(m<1);

pr="";
int n;
do{
    std::cout<<pr<<":\n";
    std::cout<<"Enter number of colums: -->  ";
    pr="You are wrong; repeat please!:\n";
    if(getNum(n)<0)
    return NULL;
}while(n<1);

try{
matrix M=new matrix;
}
catch(std::bad_alloc &ba){
    std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
}

M.m=m;
M.n=n;
M.start=NULL;
std::cout<<"Enter matrix: -->";
pr="You are wrong; repeat please!:\n";
double a;
for(int i=0;i<M.m;i++)
    for(int j=0;j<M.n;j++){
        if(getNum(a)<0){
            std::cout<<pr;
            return NULL;}
        if(a!=0){
            if(M.start=NULL){
                try{
                    M.start=new stroki;
                }
                catch(std::bad_alloc &ba){
                    std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                    //erase
                    return NULL;
                }
                M.start.stroknum=i;
                M.start.down=NULL;
                try{
                    M.start.right=new stolbi;
                }
                catch(std::bad_alloc &ba){
                    std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                    //erase
                    return NULL;
                }
               M.start.right.k=a;
               M.start.right.stolbnum=j;
               M.start.right.right=NULL;
            }
            else{
                stroki* w=M.start;
                while(w.down!=NULL)
                    w=w.down;
                    if(w->stroknum!=i){
                        try{
                            w.down=new stroki;
                        }
                        catch(std::bad_alloc &ba){
                            std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                            //erase
                            return NULL;
                         }
                        w.down.stroknum=i;
                        w.down.down=NULL;
                        try{
                             w.down.right=new stolbi;
                            }
                        catch(std::bad_alloc &ba){
                            std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                            //erase
                            return NULL;
                        }
                        w.down.right.k=a;
                        w.down.right.stolbnum=j;
                        w.down.right.right=NULL;}
                    else{
                        try{
                            w.right=new stolbi;
                        }
                        catch(std::bad_alloc &ba){
                            std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                            //erase
                            return NULL;
                        }
                        w.right.k=a;
                        w.right.stolbnum=j;
                        w.right.right=NULL;
                    }
            }
        }
        
    }

   





















return 0;
}
