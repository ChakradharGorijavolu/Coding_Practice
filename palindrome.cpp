#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    k=n;
    int p=0;
    while(n>0){
        int h=n%10;
        p=p*10 + h;
        n=n/10;
    }
    if(k==p){
        cout<<"It is a palindrome"<<"\n";
    }
    else{
        cout<<"Not a palindrome"<<"\n";
    }
}