#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int diff;
        int n, sum1 = 0, sum2 = 0;
        n = nums.size();
        sum1 = (n * (n + 1)) / 2;
        for (int i = 0; i < nums.size(); i++) {
            sum2 += nums[i];
        }
        diff = sum1 - sum2;
        return diff;
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter the size of the array (excluding the missing number): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "The missing number is: " << solution.missingNumber(nums) << endl;

    return 0;
}
