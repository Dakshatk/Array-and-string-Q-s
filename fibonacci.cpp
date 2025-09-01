#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int x1 = 0, x2 = 1, x;
        for (int i = 2; i <= n; i++) {
            x = x1 + x2;
            x1 = x2;
            x2 = x;
        }
        return x2;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << sol.fib(n) << endl;
    return 0;
}
