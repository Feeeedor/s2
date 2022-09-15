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
        return M;
    }

    int vvod(matrix *&M){
        std::cout<<"Enter matrix: -->";
        const char *pr="You are wrong; repeat please!:\n";
        double a;
     
        M->first=NULL;
        note*w;
        for(int i=0;i<M->Nstrok;i++)
            for(int j=0;j<M->Nstolb;j++){
                if(getNum(a)<0){
                    std::cout<<pr;
                    return 1;
                }
                if(a!=0){
                    if(M->first==NULL){
                    try{
                        M->first=new note;
                    }
                    catch(std::bad_alloc &ba){
                        std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                        erase (M);
                        return 0;
                    }
                w=M->first;}
                    else{
                        try{
                        w->next=new note;
                    }
                    catch(std::bad_alloc &ba){
                        std::cout<<"------- too many rows in matrix:  "<<ba.what()<<":\n";
                        erase(M);
                        return 0;
                    }
                    w=w->next;
                    }
                
                    w->k=a;
             
                    w->numstrok=i;
                    w->numstolb=j;
                    w->next=NULL;
                    
                }
            }

            
        return 0;
    }
        
        
    int printM(matrix *M){
        /*
        note *w=M->first;
        while(w!=NULL){
        std::cout<<"k:"<<w->k<<" i:"<<w->numstrok+1<<" j:"<<w->numstolb+1<<"\n";
        w=w->next;}
        */
        
        note *w=M->first;
        for(int i=0;i<M->Nstrok;i++){
            for(int j=0;j<M->Nstolb;j++){
            if(w!=NULL){
                    if(w->numstrok!=i || w->numstolb!=j){
                        std::cout<<"0 ";
                    }
                    else{
                        std::cout<<w->k<<" ";
                        w=w->next;
                   }
                  
                }
            else if(w==NULL)
                std::cout<<"0 ";}
               
                std::cout<<std::endl;
            }
            
        return 0;
    }
int erase(matrix *&M){
note *w=M->first;
while(w!=NULL){
    note*e=w->next;
    delete w;
    w=e;
}
delete M;
return 0;
}

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
        }while(getNum(c)<0 || c<1);
        n=c;
        return 0;
}

}
    
