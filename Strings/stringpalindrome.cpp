#include<iostream>
using namespace std;
#include<string>
#include<algorithm>


void stringpalindrome(string s){
    string r=s;
    reverse(r.begin(),r.end());
    if(r==s){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}


int main(){
    string s;
    getline(cin,s);
    stringpalindrome(s);
}