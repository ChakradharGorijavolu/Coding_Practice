#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

void duplicates(string s){
    //sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                s.erase(j,1);
                j--;
            }
        }
    }
    cout<<s;
}

int main(){
    string s;
    getline(cin,s);
    duplicates(s);
}