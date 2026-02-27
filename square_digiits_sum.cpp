#include<iostream>
using namespace std;

int main() {
    int n, digit, sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;          
        sum = sum + digit * digit;  
        n = n / 10;              
    }

    cout << "The sum of squares of digits: " << sum;

    return 0;
}