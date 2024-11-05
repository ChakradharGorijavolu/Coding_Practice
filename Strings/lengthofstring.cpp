#include<iostream>
using namespace std;
#include<string>

void length(string s){
    cout<<s.size();
}

int main(){
    string s;
    getline(cin,s);
    length(s);
}