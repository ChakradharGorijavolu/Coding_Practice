#include<iostream>
using namespace std;
#include<string>

void sliding(int n,int k){
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<=n-k;i++){
        int max=a[i];
        for(int j=i+1;j<i+k;j++){
            if(a[j]>max){
                max=a[j];
            }
        }
        cout<<max<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    sliding(n,k);
}