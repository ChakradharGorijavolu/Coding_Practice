#include<iostream>
using namespace std;
#include<string>

void vowelremoval(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            s.erase(i,1);
        }
    }
    cout<<s;
}

int main(){
    string s;
    getline(cin,s);
    vowelremoval(s);
}