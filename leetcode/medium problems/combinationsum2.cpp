#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void combinesum(vector<int>&nums, int target, int index,
     vector<int>&temp, vector<vector<int>>& ans, vector<int>& count){

    bool available = false;
    if (index>=nums.size() or target<=0){
        if (target==0){
            ans.push_back(temp); 
            return;
        }
        else{
            return;
        }
    }

    for (int i = 0; i<count.size(); i++){
        if (count[i]==nums[index]){
            cout<<"duplicate spotted"<<index<<endl;
            available = true;
        }
    }

    if (available == false){
        count.push_back(nums[index]);
        temp.push_back(nums[index]);
        combinesum(nums, target - nums[index], index, temp , ans, count);
        temp.pop_back();
    }
    else{
        available = false;
    }
    combinesum(nums, target, index+1, temp, ans, count);

}
int main() {
    vector<int>nums = {10,1,2,7,6,1,5};
    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>count; 
    int target = 8; 

    combinesum(nums, target, 0, temp, ans, count); 
    for (int i =  0; i<ans.size(); i++){
        for (int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
        cout<<" "; 
    }


}