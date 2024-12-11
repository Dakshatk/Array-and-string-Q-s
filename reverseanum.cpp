#include<iostream>
#include<climits> 
using namespace std;

int reverse(int x) {
    signed long long int rem = 0;
    signed long long int reverse = 0;
    while(x != 0) {
        rem = x % 10;
        reverse = reverse * 10 + rem;
        x = x / 10;
    }
    if (reverse < INT_MIN || reverse > INT_MAX) {
        reverse = 0;
    }
    return static_cast<int>(reverse);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number: " << reverse(num) << endl;
    return 0;
}
