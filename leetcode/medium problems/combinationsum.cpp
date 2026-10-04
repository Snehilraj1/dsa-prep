#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void combinesum(vector<int>&nums, int target, int index, vector<int>&temp, vector<vector<int>>& ans){

    if (index>=nums.size() or target<=0){
        if (target==0){
            ans.push_back(temp); 
            return;
        }
        else{
            return;
        }
    }

    temp.push_back(nums[index]);
    combinesum(nums, target - nums[index], index, temp , ans);
    temp.pop_back();
    combinesum(nums, target, index+1, temp, ans);
}
int main() {
    vector<int>nums = {2,3,6,7};
    vector<vector<int>>ans;
    vector<int>temp;
    int target = 7; 

    combinesum(nums, target, 0, temp, ans); 
    for (int i =  0; i<ans.size(); i++){
        for (int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
        cout<<" "; 
    }


}