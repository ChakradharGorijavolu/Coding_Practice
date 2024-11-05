#include<iostream>
using namespace std;
#include<string>

void interchange(string s,char a,char p){
    int k=s.length();
    for(int i=0;i<k;i++){
        if(s[i]==a){
            s[i]=p;
        }
        else if(s[i]==p){
            s[i]=a;
        }
    }
    cout<<s;
}

int main(){
    string s;
    char a,p;
    getline(cin,s);
    cin>>a>>p;
    interchange(s,a,p);
}