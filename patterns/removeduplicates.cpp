#include<iostream>
using namespace std;
#include<set>

void frequency(int n){
    int a[n];
    set<int>ok;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        ok.insert(a[i]);
    }
    for(const auto&k:ok){
        cout<<k;
    }
}

int main(){
    int n;
    cin>>n;
    frequency(n);
}