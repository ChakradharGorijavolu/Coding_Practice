#include<iostream>
using namespace std;
#include<cmath>

void conversiontodecimal(int n){
    int k=0,i=0,oct=0;
    while(n>0){
        k=n%10;
        oct=oct+k*pow(8,i);
        n=n/10;
        i++;
    }
    cout<<oct<<" ";
}
int main(){
    int n;
    cin>>n;
    conversiontodecimal(n);

}