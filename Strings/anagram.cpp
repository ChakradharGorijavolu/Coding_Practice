#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

void anagram(string s,string k){

    sort(s.begin(),s.end());
    sort(k.begin(),k.end());

    if(s.compare(k)==0){
        cout<<"anagram";
    }
    else{
        cout<<"Itis not an anagram";
    }
}

int main(){
    string s;
    getline(cin,s);
    string k;
    getline(cin,k);
    anagram(s,k);
}