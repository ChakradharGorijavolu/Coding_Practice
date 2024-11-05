#include<iostream>
using namespace std;
#include<string>
#include<list>

void strlist(int n){
    list<string>stringlist;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        stringlist.push_back(s);
    }
    for( auto s:stringlist){
        cout<<s;
    }
}

int main(){
    int n;
    cin>>n;
    strlist(n);
}