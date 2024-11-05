#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int n;
    cin>>n;
    int c=n;
    int k,arm=0,digit=0;
    int j=n;
    while(j>0){
        j=j/10;
        digit++;

    }
    while(n>0){
        k=n%10;
        arm=arm +pow(k,digit);
        n=n/10;
    }
    if(c==arm){
        cout<<"It is a Armstrong number"<<"\n";
    }
    else{
        cout<<"Not an amrstrong number"<<"\n";
    }
}