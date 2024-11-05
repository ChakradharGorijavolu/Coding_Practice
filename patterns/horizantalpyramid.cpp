#include<iostream>
using namespace std;


void pattern(int n){
    for(int i=1;i<=2*n-1;i++){
        int k= i>n?2*n-i:i;
        for(int j=1;j<=k;j++){
            cout<<" * ";
           
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}