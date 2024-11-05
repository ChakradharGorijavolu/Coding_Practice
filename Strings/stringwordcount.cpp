#include<iostream>
using namespace std;
#include<string>

void stringcount(string s){
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            count++;
        }
        else{
            if(count>0){
                cout<<count;
                count=0;
            }
        }
    }
    if(count>0){
        cout<<count;
    }
}

int main(){
    string s;
    getline(cin,s);
    stringcount(s);
}