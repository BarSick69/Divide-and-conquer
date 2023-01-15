// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <stdio.h>
int exista_pare(int lista_numerelor[],int inceput,int sfarsit);
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
    }
    cout<<lista_numerelor[0];
    if(exista_pare(lista_numerelor,0,size-1)==1){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }
    return 0;
}
int exista_pare(int lista_numerelor[],int inceput,int sfarsit){
    int mijloc=(inceput+sfarsit)/2;
    if(inceput!=sfarsit){
        int st=exista_pare(lista_numerelor,inceput,mijloc);
        int dr=exista_pare(lista_numerelor,mijloc+1,sfarsit);
        if(st%2!=0 || dr%2!=0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(lista_numerelor[inceput]%2!=0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
