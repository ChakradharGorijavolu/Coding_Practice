#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

void frequency(string s){
    sort(s.begin(),s.end());
    if(s.length()==1){
        cout<<s<<"1";
    }
    else{
        for(int i=0;i<s.length();i++){
            int count=1;
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    count++;
                    i++;
                }
                else{
                    break;
                }
            }
            cout<<s[i]<<"-"<<count<<"\n";
        }
    }
}

int main(){
    string s;
    getline(cin,s);
    frequency(s);
}