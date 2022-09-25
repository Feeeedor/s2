#include <iostream>
#include "prog1.h"


    matrix *input(){
        int m, n;
        vvodsize(m,n);
        matrix *M;
        try{
            M=new matrix;
        }
        catch(std::exception &ba){
            std::cout<<"Error:  "<<ba.what()<<":\n";
        }
        M->Nstrok=m;
        M->Nstolb=n;
        vvod(M);
        return M;
    }

    int vvod(matrix *M){
        std::cout<<"Enter matrix: -->";
        double a;
        M->first=NULL;
        note*w;
        for(int i=0;i<M->Nstrok;i++)
            for(int j=0;j<M->Nstolb;j++){
                vvodd(a);
                if(a!=0){
                    if(M->first==NULL){
                    try{
                        M->first=new note;
                    }
                    catch(std::exception &ba){
                        std::cout<<"Error:  "<<ba.what()<<":\n";
                        erase (M);
                        return 0;
                    }
                w=M->first;}
                    else{
                        try{
                        w->next=new note;
                    }
                    catch(std::exception &ba){
                        std::cout<<"Error:  "<<ba.what()<<":\n";
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
        
    int printArr(double*arr, int n){
        std::cout<<"Vector: \n";
        for(int i=0;i<n;i++)
            std::cout<<arr[i]<<" ";
        std::cout<<std::endl;
return 0;
    }

    int printM(matrix *M){
        std::cout<<"Matrix: \n";
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
int erase(matrix *M){
note *w=M->first;
while(w!=NULL){
    note*e=w->next;
    delete w;
    w=e;
}
delete M;
return 0;
}

int erase(double *arr){

delete []arr;
return 0;
}

double * create( matrix *M){
    double*arr;
            try{
                        arr=new double[M->Nstolb];
                    }
                    catch(std::exception &ba){
                        std::cout<<"Error:  "<<ba.what()<<":\n";
                        erase (arr);
                        return 0;
                    }
int xline=find(M);

note*w=M->first;
if(w!=NULL){
while(w->numstrok!=xline)
w=w->next;

for(int i=0;i<M->Nstolb;i++){
    if(w!=NULL && w->numstrok==xline){
        if(i!=w->numstolb && w->numstrok==xline)
            arr[i]=0;
        else{
            arr[i]=w->k;
            w=w->next;}}
    else{
        arr[i]=0;
    }
   
}
}
else
for(int i=0;i<M->Nstolb;i++)
arr[i]=0;



exchange(arr, M->Nstolb);



return arr;
}

int swap(double &x, double &y){
double q=x;
x=y;
y=q;
return 0;
}

int exchange(double*arr, int n){
    if(arr[0]>0){
    
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                    if(arr[j]<arr[i])
                        swap(arr[i], arr[j]);}
    else{
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(arr[j]>arr[i])
                    swap(arr[i], arr[j]);
    }
    return 0;
}


int find(matrix *M){
    note*w=M->first;
    double s=0;
    int col=0;
    double si=0;
    int coli=0;
    while(w!=NULL){
        if(w->numstrok!=coli){
            if(si>s){
                s=si;
                col=coli;}
            si=w->k;
            coli=w->numstrok;}
        else
            si=si+w->k;
            w=w->next;
    }
    if(si>s)
        return coli;
    else
        return col;
}

int vvodsize(int &m, int &n){
            std::cout<<"Enter number of lines: -->  ";
        vvodi(m);
        
        
            std::cout<<"Enter number of colums: -->  ";
          vvodi(n);
       
        return 0;
}




int vvodi(int &a){
while(1){    
    std::cin>>a;
   if(std::cin.good()==1)
   break;
    std::cout<<"You are wrong. Repeat please"<<std::endl;
   std::cin.clear();
std::cin.ignore();
}
return 1;
}

int vvodd(double &a){
while(1){    
    std::cin>>a;
   if(std::cin.good()==1)
   break;
    std::cout<<"You are wrong. Repeat please"<<std::endl;
   std::cin.clear();
std::cin.ignore();
}
return 1;
}



    
