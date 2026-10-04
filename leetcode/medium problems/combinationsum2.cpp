#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void combinesum(vector<int>&nums, int target, int index,
     vector<int>& temp, vector<vector<int>>& ans){
    vector<int>repetition;
    if (target==0){
        ans.push_back(temp); 
        return;
    }
    else if (index>=nums.size() or target<0){
        return;
    }

    for (int i = index; i<nums.size(); i++){

        if (repetition.size() == 0 or repetition[repetition.size()-1]!=nums[i]){
            repetition.push_back(nums[i]); 
            temp.push_back(nums[i]); 
            combinesum(nums, target - nums[i], i+1, temp, ans);
            temp.pop_back();
        }

    }

    

}
int main() {
    vector<int>nums = {2,5,2,1,2};
    sort(nums.begin(), nums.end());
    vector<vector<int>>ans;
    vector<int>temp;
    int target = 5; 

    combinesum(nums, target, 0, temp, ans); 
    for (int i =  0; i<ans.size(); i++){
        for (int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
        cout<<" "; 
    }


}