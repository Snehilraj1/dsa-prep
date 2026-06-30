#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        // Water cannot physically be trapped with fewer than 3 bars (Left wall, center gap, Right wall)
        if (n <= 2) return 0; 

        vector<int> prefix_max(n);
        vector<int> suffix_max(n);

        // STEP 1: Build the Prefix Max array (Left to Right)
        // Tracks the highest wall standing to the left of (or at) any index i
        prefix_max[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefix_max[i] = max(prefix_max[i - 1], arr[i]);
        }

        // STEP 2: Build the Suffix Max array (Right to Left)
        // Tracks the highest wall standing to the right of (or at) any index i
        suffix_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix_max[i] = max(suffix_max[i + 1], arr[i]);
        }

        // STEP 3: Calculate total trapped water
        // The total water above any column is restricted by the shorter of its two bounding walls
        int total_water = 0;
        for (int i = 0; i < n; i++) {
            // Find the maximum height water can reach at this index
            int water_level = min(prefix_max[i], suffix_max[i]);
            
            // Subtract the bar's actual structural height to find net trapped water
            total_water += (water_level - arr[i]);
        }

        return total_water;
    }
};

int main() {
    Solution solver;
    vector<int> arr = {2, 0, 2, 0, 2};
    cout << "Total water trapped (Optimized Approach): " << solver.trap(arr) << endl;
    return 0;
}