#include<iostream>
using namespace std;

void tcs2(int r1,int n,int r2,int x){
    int k,h;
    k=x/60;
    h=r1*n+(k-n)*r2;
    cout<<h;
}

int main(){
    int r1,n,r2,x;
    cin>>r1;
    cin>>n;
    cin>>r2;
    cin>>x;
    tcs2(r1,n,r2,x);
}