#include<iostream>
using namespace std;

void Conversion(int n){
    int a[n],i=0;
   while(n>0){
    a[i]=n%2;
    n=n/2;
    i++;
   }
   for(int j=i-1;j>=0;j--){
    cout<<a[j]<<" ";
   }
}


int main(){
    int n;
    cin>>n;
    Conversion(n);
    return 0;

}