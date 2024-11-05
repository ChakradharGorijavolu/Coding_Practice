#include<iostream>
using namespace std;
#include<cmath>

int Conversion(long long n){
    int i=0,decimal_value=0;
    while(n>0){
        int digit=n%10;
        decimal_value=decimal_value + digit*pow(2,i);
        n=n/10;
        i++;
    }
    return decimal_value;

}


int main(){

    long long n;
    cin>>n;
    int result=Conversion(n);
    cout<<result<<" ";

}