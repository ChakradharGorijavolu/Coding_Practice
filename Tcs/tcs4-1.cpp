#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>nonzero;
    vector<int>zeros;
    int size,n;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>n;
        if(n==0){
        zeros.push_back(n);
        }
        else{
            nonzero.push_back(n);
        }
    }
    nonzero.insert(nonzero.end(),zeros.begin(),zeros.end());

    for(int k:nonzero){
        cout<<k<<" ";
    }
}