#include<iostream>
using namespace std;
#include<set>
#include<vector>

void fun(int n){
    vector<int>a(n);
    set<int,greater<int>>setint;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        setint.insert(a[i]);
    }
    for(auto k:setint){
        cout<<k<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    fun(n);
}