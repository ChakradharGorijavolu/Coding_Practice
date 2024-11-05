#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    char str[100];
    int k,n;
    cin>>str;
    reverse(str.begin(),str.end());
    if(k==n){
       cout<<"It is a palindrome"<<"\n";
    }
    else{
        cout<<"Not a palindrome"<<"\n";
    }
}