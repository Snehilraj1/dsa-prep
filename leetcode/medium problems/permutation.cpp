#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void permutations(vector<vector<int>>& answer, vector<int>& nums, vector<int>temp, vector<int>visited, int index){

    if (index>=nums.size()){
        answer.push_back(temp);
        return;
    }

    for (int i = 0; i<nums.size(); i++){
        if (visited[i]==0){
            temp[index] = nums[i]; 
            visited[i] = 1; 
            
            permutations(answer, nums, temp, visited, index + 1);
            
            visited[i] = 0; 
        }
    }
    

}
int main() {
    vector<int>nums = {1, 2, 3,}; 
    vector<int>visited = {0, 0, 0};
    vector<int>temp(nums.size());
    vector<vector<int>>answer; 

    permutations(answer, nums, temp, visited, 0); 

    for (int i = 0; i<answer.size(); i++){
        for (int j = 0; j<3; j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }





}