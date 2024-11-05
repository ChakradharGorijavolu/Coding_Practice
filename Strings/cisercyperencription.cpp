#include<iostream>
using namespace std;
#include<string>

void fun(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='x'){
            s[i]=s[i]-23;
        }
        else{
        s[i]=s[i]+3;
        }
    }
    cout<<s;
}

int main(){
    string s;
    getline(cin,s);
    fun(s);
}