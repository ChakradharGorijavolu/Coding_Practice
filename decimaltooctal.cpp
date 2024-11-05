#include<iostream>
using namespace std;


void conversion(int n){
    int k=0,i=0;
    int a[n];
    while(n>0){
        k=n%8;
        a[i]=k;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }
}


int main(){
    int n;
    cin>>n;
    conversion(n);
}