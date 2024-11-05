#include<iostream>
using namespace std;
#include<map>

void frequency(int n){
    int a[n];
     map<int,int>maping;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        maping[a[i]]++;
    }
    for(const auto&pair:maping){
        cout<<pair.first<<" "<<pair.second<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    frequency(n);
}