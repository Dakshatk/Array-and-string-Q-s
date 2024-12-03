#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 2, 3};  
    int n = sizeof(nums) / sizeof(nums[0]);  
    
    int candidate = 0;
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    cout << "Majority Element: " << candidate << endl;
    return 0;
}
