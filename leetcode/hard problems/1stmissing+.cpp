#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Test case: [4, 1, 2] -> Expected output: 3
    vector<int> nums = {6,7,8,9}; 
    int n = nums.size();
    int standard = n + 1;  


    for (int i = 0; i < n; i++) {
        if (nums[i] <= 0 || nums[i] > n) {
            nums[i] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        int original_val = nums[i] % standard;
        if (original_val > 0) {
            nums[original_val - 1] += standard;
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] / standard == 0) {
            cout << (i + 1) << endl;
            return 0;
        }
    }

    // 4. If all slots from 1 to n are filled, the missing number is n + 1
    cout << n + 1 << endl;
    return 0; 
}