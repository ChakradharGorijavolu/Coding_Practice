#include<iostream>
using namespace std;
#include<vector>

int main(){
    int size;
    cin>>size;

     if (size <= 0) {
        cout << "0" << endl;
        return 0;
    }

    vector<int>n(size);

    for(int i=0;i<size;i++){
        cin>>n[i];
    }
    int k;
    for(int i=size;i>=0;i--){
        if(n[i]<n[i+1]){
            k=n[i];
            break;
        }
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(n[i]==k){
            count++;
        }
    }
    cout<<count;
}