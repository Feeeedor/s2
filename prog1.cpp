#include <iostream>
#include "prog1.h"
namespace prog1{
    matrix *input(){
        const char* pr="";
        int m;
        do{
            std::cout<<pr;
            std::cout<<"Enter number of lines: -->  ";
            pr="You are wrong; repeat please!\n";
        }while(getNum(m)<0 || m<1);
        pr="";
        int n;
        do{
            std::cout<<pr;
            std::cout<<"Enter number of colums: -->  ";
            pr="You are wrong; repeat please!\n";
            if(getNum(n)<0)
                return NULL;
        }while(n<1);
    matrix *M;
    try{
        M=new matrix;
    }
    catch(std::bad_alloc &ba){
        std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
    }

    M->Nstrok=m;
    M->Nstolb=n;
    int size =0;
    
    std::cout<<"Enter matrix: -->";
    pr="You are wrong; repeat please!:\n";
    double a;
     try{
        M->arr=new note[size];
    }/*
    catch(std::bad_alloc &ba){
        std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
      //erase
        return NULL;
    }*/
   
    for(int i=0;i<M->Nstrok;i++)
        for(int j=0;j<M->Nstolb;j++){
            if(getNum(a)<0){
                std::cout<<pr;
                return nullptr;}
            if(a!=0){
                size++;
                try{
                     arr2=new note[size];
                }
                copy (M->arr,arr2);
                M->arr=arr2;
                try{
                    M->arr[size-1]=new note;
                }
                M->arr[size-1]->k=a;
                M->arr[size-1]->numstrok=i;
                M->arr[size-1]->numstolb=j;
            }
        }
        }
        
        return M;
    }
int copy(note*&arr,note *&arr2){
    for(int i=0;i<sizeof(arr)/sizeof(note);i++)
        arr2[i]=arr[i];
    delete &arr;
    return 0;
}

/*
    int printM(matrix *M){
        std::cout<<"ll";
        stroki *w=M->start;
for(int i=0;i<M->m;i++)
    if(w->stroknum!=i){
        for(int j=0;j<M->n;j++)
            std::cout<<"0 ";}
    else{
    stolbi *e=w->right;
    for(int j=0;j<M->n;j++)
        if(e->stolbnum!=j)
                std::cout<<"0 ";
            else{
                std::cout<<e->k<<" ";
                e=e->right;
            }
    w=w->down;
    }
       return 0;
        }
*/
    
    
