#include<iostream>
using namespace std;
#include<map>
#include<string>

void finc(int n){
    map<string,int>strings;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        strings[s]++;
    }

    for(auto ss: strings){
        cout<<ss.first<<"-"<<ss.second<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    finc(n);
}