#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

void permutate(vector<int>& nums, vector<vector<int>>& ans, int index){
    vector<int>tracking;
    bool available = false;
    if (index>=nums.size()){
        ans.push_back(nums);
        return;
    }

    for (int i = index; i<nums.size(); i++){
        for (int j = 0; j<tracking.size(); j++){
            if (tracking[j]==nums[i]){
                available = true;
            }
        }

        if (available == false){
            tracking.push_back(nums[i]); 
            swap(nums[index], nums[i]); 
            
            permutate(nums, ans, index+1);
                // get back to the original position
            swap(nums[index], nums[i]); 
        }
        
        available = false;


    }
}
int main() {
    vector<int> nums = {1, 1, 2, 2};  //
    vector<vector<int>> ans;

    permutate(nums, ans, 0); 

    for(int i = 0; i<ans.size(); i++){
        for (int j = 0; j<ans[0].size(); j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }


}