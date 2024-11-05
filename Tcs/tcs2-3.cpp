#include<iostream>
using namespace std;

void tcs2(string s){
    int count=0,add=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            count++;
        }
        else if(s[i]=='*'){
            add++;
        }
    }
    if(add==count){
        cout<< "0";
    }
    else if(add>count){
       cout<<add-count;
    }
    else{
        cout<<add-count;
    }
}

int main(){
    string s;
    cin>>s;
    tcs2(s);
}