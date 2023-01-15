// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <stdio.h>
int AlternDivImp(int a[], int st, int dr){
    int mijl=(st+dr)/2;
    if(st==dr){
        return 1;
    }
    else if(dr-st==1){
        if((a[st]%2==0 && a[dr]%2!=0) ||(a[st]%2!=0 && a[dr]%2==0)){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        int nrst=AlternDivImp(a,st,mijl);
        int nrdr=AlternDivImp(a,mijl,dr);
        if(nrst+nrdr==2){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main() {
    // Write C++ code here
    int size=0;
    cout<<"Dati numarul de cifre:";
    cout<<"\n";
    scanf("%d",&size);
    int element;
    int lista_numerelor[size]={};
    int a[] = {1,2,3,4,5,6,7,8,9,11};
    for(int i=0;i<size;i++){
        scanf("%d",&element);
        lista_numerelor[i]=element;
    };
    cout<<AlternDivImp(a, 1, 8);
}
