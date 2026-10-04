#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void subset(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int index){
    ans.push_back(temp); 
    
    for (int i = index; i<nums.size(); i++ ){
        if (i > index and nums[i-1]==nums[i]){
            continue;
        }
        temp.push_back(nums[i]); 
        subset (nums, temp, ans , i+1); 
        temp.pop_back();
    }
}
int main() {
    vector<int>nums = {1,2,2}; 
    vector<int>temp; 
    vector<vector<int>>ans; 
    sort(nums.begin(), nums.end()); 
    
    subset(nums, temp, ans, 0); 
    cout<<ans.size();
    for (int i =  0; i<ans.size(); i++){
        for (int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
        cout<<" "; 
    }

}