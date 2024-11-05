#include<iostream>
using namespace std;
#include<algorithm>
#include<string>

void greatest_string(string s){
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s;
}

int main(){
    string s;
    getline(cin,s);
    greatest_string(s);
}