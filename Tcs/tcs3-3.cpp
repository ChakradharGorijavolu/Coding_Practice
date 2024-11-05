#include<iostream>
using namespace std;

void tcs3(int n){
    int pro=1,k;
    while(n>0){
        k=n%10;
        pro=pro*k;
        n=n/10;
    }
    cout<<pro;
}
int main(){
    int n;
    cin>>n;
    tcs3(n);
}