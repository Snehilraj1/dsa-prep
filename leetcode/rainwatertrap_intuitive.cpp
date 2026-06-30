#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// tough its too dumb considering the optimized approach but thats how i approaches it at first 
int main() {
    // Standard test case layout
    vector<int> arr = {2, 0, 2, 0, 2}; 
    int n = arr.size();

    if (n <= 2) {
        cout << "Total water trapped: 0" << endl;
        return 0;
    }

    // STEP 1: Precompute the Suffix Max Array (Right-to-Left)
    // This allows the code to look ahead and ensure a boundary wall exists on the right side.
    vector<int> suffixmax(n);
    suffixmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffixmax[i] = max(arr[i], suffixmax[i + 1]);
    }

    // STEP 2: Main processing loop tracking the Left Wall dynamically
    int chosen = arr[0];    // Tracks the highest wall found so far from the left
    bool greater_exists = false;   // Flag to check if a right wall is available
    int total_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        
        // Always check if there is a wall at least as tall as the current bar to the right
        if (suffixmax[i + 1] >= arr[i]) {
            greater_exists = true;
        } else {
            greater_exists = false;
        }

        // If a right-side bounding wall exists, look at the left wall ('chosen')
        if (greater_exists) {
            // Spillway Condition: If the current bar is higher than or equal to our left wall, 
            // no water can sit here. This bar now becomes our new left wall anchor.
            if (chosen - arr[i] <= 0) {
                chosen = arr[i];
            } 
            // Valley Condition: If current bar is shorter than 'chosen', we found a valley!
            else {
                total_sum += (chosen - arr[i]);
            }
        } 
        // If no right wall exists to contain water, update our left anchor to the next best right option
        else {
            chosen = suffixmax[i + 1];
        }
    }

    cout << "Total water trapped (Intuitive Approach): " << total_sum << endl;
    return 0;
}