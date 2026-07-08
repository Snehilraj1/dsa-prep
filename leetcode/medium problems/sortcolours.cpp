#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {0,0,1,1,2,2}; //
    int n = nums.size();
    int left = 0; 
    int right = n-1; 
    int mid = (left + right)/2; 

    while(mid<right){
            if (nums[mid]==2){
                swap(nums[mid], nums[right]); 
                right--;
            }
            else if (nums[mid] == 0){
                swap(nums[mid], nums[left]);
                left++;
            }
            else {
                mid++;
            }
}
for (int i = 0; i<n; i++){
    cout<<nums[i]<<", ";
}


}