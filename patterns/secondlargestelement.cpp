#include<iostream>
using namespace std;
#include<vector>

void frequency(int n){
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<n;i++){
        temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    
        cout<<a[n-2];
    
}

int main(){
    int n;
    cin>>n;
    frequency(n);
}