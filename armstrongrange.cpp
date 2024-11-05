#include<iostream>
using namespace std;
#include<math.h>


int armstrong(int n){

}

int main(){
    int st,n;
    cin>>st>>n;
    int c=n,k=n,digit=0;
    while(n>0){
        k=n/10;
        digit++;
    }
    int arm=0;
    for(int i=st;i<n;i++){
        int l=st/10;
        arm=arm+pow(l,digit);
        st=st/10;
    }
    if(c==arm){
        cout<<"It is a Armstrong number"<<"\n";
    }
    else{
        cout<<"Not an amrstrong number"<<"\n";
    }

}