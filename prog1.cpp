#include <iostream>
#include "prog1.h"
namespace prog1{
    matrix *input(){
        int m;
        int n;
        vvodsize(m,n);
    matrix *M;
    try{
        M=new matrix;
    }
    catch(std::bad_alloc &ba){
        std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
    }

    M->Nstrok=m;
    M->Nstolb=n;

    vvod(M);
    return M;}

    int vvod(matrix *&M){
    std::cout<<"Enter matrix: -->";
    const char *pr="You are wrong; repeat please!:\n";
    double a;
     
  M->first=NULL;
  note*w=M->first;
    for(int i=0;i<M->Nstrok;i++)
        for(int j=0;j<M->Nstolb;j++){
            if(getNum(a)<0){
                std::cout<<pr;
                return 1;}
            if(a!=0){
                try{
                    w=new note;
                }
                catch(std::bad_alloc &ba){
                    std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                //erase
                return 0;
                }
                
                
                
                w->k=a;
                w->numstrok=i;
                w->numstolb=j;
                w->next=NULL;
                w=w->next;
            }
        }
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

int vvodsize(int &m, int &n){
    const char* pr="";
        int c;
        do{
            std::cout<<pr;
            std::cout<<"Enter number of lines: -->  ";
            pr="You are wrong; repeat please!\n";
        }while(getNum(c)<0 || c<1);
        pr="";
        m=c;
        
        do{
            std::cout<<pr;
            std::cout<<"Enter number of colums: -->  ";
            pr="You are wrong; repeat please!\n";
        }while(getNum(c)<0 || n<1);
        n=c;
        return 0;
}

}
    
