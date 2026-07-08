// Problem: Segregate 0s and 1s in an Array / Vector
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Approach 1: Counting Zeros (Two-pass approach)
void solveByCounting(vector<int>& a) {
    int zero_count = count(a.begin(), a.end(), 0);
    for (int i = 0; i < a.size(); i++) {
        if (i < zero_count) a[i] = 0;
        else a[i] = 1;
    }
}

// Approach 2: Two-Pointer Method (Optimal Single-Pass)
void solveByTwoPointers(vector<int>& a) {
    int left = 0, right = a.size() - 1;
    while (left < right) {
        while (a[left] == 0 && left < right) left++;
        while (a[right] == 1 && left < right) right--;
        if (left < right) {
            swap(a[left], a[right]);
            left++; right--;
        }
    }
}