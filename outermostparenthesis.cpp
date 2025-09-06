#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int balance = 0;
        string primitive = "";

        for (char c : s) {
            primitive += c;
            if (c == '(') balance++;
            else balance--;

            // when balance hits 0 => one primitive complete
            if (balance == 0) {
                // strip outermost '(' and ')'
                ans += primitive.substr(1, primitive.size() - 2);
                primitive = "";
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;
    cout << "Output: " << sol.removeOuterParentheses(s) << endl;
    return 0;
}
