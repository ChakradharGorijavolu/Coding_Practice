#include<iostream>
using namespace std;

int function(int n1, int n2) {
    int lcm;
    int k=abs(n1*n2);

    for (int i = 1; i <= n1 || i<=n2; i++) {
        if (n1 % i == 0 &&  n2 % i == 0) {
            lcm = i;
        }
    }
    
    return k/lcm;
}

int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int lcm = function(n1, n2);
    cout << "The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
    return 0;
}