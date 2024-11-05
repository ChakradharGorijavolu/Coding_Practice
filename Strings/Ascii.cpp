#include<iostream>
using namespace std;
#include<string>

void ascii(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        cout<<s[i];
    }
}

int main(){
    string s;
    getline(cin,s);
    ascii(s);
    
}