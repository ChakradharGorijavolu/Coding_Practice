#include<iostream>
using namespace std;
#include<string>
#include<stack>

void reverse(string s){
    string rev="";
    stack<char> sk;
    for(char c:s){
        sk.push(c);
    }

    while(!sk.empty()){
        rev+=sk.top();
        sk.pop();
    }
    cout<<rev;
}

int main(){
    string s;
    getline(cin,s);
    reverse(s);
}