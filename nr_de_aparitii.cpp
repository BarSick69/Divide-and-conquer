// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <stdio.h>
int NrXDivImp(int a[], int st, int dr, int x){
    int apst=0;
    int apdr=0;
    int mijl=(st+dr)/2;
    if(st==dr){
        if(a[st]==x){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        apst+=NrXDivImp(a,st,mijl,x);
        apdr+=NrXDivImp(a,mijl+1,dr,x);
        return apst+apdr;
    }
}
int main() {
    // Write C++ code here
    int size=0;
    int x=1;
    cout<<"Dati numarul de cifre:";
    cout<<"\n";
    scanf("%d",&size);
    int lista_numerelor[size]={};
    int element;
    for(int i=0;i<size;i++){
        scanf("%d",&element);
        lista_numerelor[i]=element;
    };
    cout<<NrXDivImp(lista_numerelor,0,size-1,x);
}
