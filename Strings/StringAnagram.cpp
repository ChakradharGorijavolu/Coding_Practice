#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

string uppertolower(string sk){
    for(int i=0;i<sk.length();i++){
        sk[i]=tolower(sk[i]);
    }
    return sk;
}

string anagram(string s,string k){
    s=uppertolower(s);
    k=uppertolower(k);

    string r="anagram";
    string g="Not an anagram";

    sort(s.begin(),s.end());
    sort(k.begin(),k.end());

    if(s==k){
        return r;
    }
    else{
        return g;
    }
}

int main(){
    string s,k;
    getline(cin,s);
    getline(cin,k);
    anagram(s,k);
    cout<<anagram(s,k);
}