// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <stdio.h>
int suma(int lista_numerelor[],int stanga,int dreapta){
    int mijloc=(stanga+dreapta)/2;
    int nr1=0;
    int nr2=0;
    if(stanga!=dreapta){
        nr1=suma(lista_numerelor,stanga,mijloc);
        nr2=suma(lista_numerelor,mijloc+1,dreapta);
        return nr1+nr2;
    }
    else{
        if(lista_numerelor[mijloc]%2==0){
            return lista_numerelor[stanga];
        }
        return 0;
    }
}
int main() {
    // Write C++ code here
    int size=0;
    cout<<"Dati numarul de cifre:";
    cout<<"\n";
    scanf("%d",&size);
    int lista_numerelor[size]={};
    int element;
    for(int i=0;i<size;i++){
        scanf("%d",&element);
        lista_numerelor[i]=element;
    };
    cout<<suma(lista_numerelor,0,size-1);
}
