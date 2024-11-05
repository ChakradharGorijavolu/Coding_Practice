#include<iostream>
using namespace std;


void pattern(int n){
    int k=n-1;
    for(int i=0;i<n;i++){
        for(int j=n;j<n;j--){
            cout<<" *";
        }
            cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}