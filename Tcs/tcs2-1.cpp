#include<iostream>
using namespace std;


void tcs2(int n){
    int a[n],count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            count++;
        }
    }
    cout<<count;
}

int main(){
    int n;
    cin>>n;
    tcs2(n);
}