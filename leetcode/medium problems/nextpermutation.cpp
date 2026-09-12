#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {16,27,25,23,25,16,12,9,1,2,7,20,19,23,16,
        0,6,22,16,11,8,27,9,2,20,2,13,7,25,29,12,12,
        18,29,27,13,16,1,22,9,3,21,29,14,7,8,14,5,0,23,16,1,20}; 
    int temp = -1; 
    int size = nums.size(); 
    int min = INT32_MAX, minele = 0;

    // detecting the correction 
    for(int i = 1; i<size; i++){
        if (nums[i-1]<nums[i]){
            temp = i-1;
        }

    }

    if (temp != -1){
    // search slightly bigger 
    for (int i = temp+1; i < size; i++){
        if (nums[i]-nums[temp]<=min and nums[i]-nums[temp]>0){
            min = nums[i]-nums[temp];
            minele = i; 
        }
    }

    swap(nums[temp], nums[minele]); 
    }

    // reverse array 
    int start = temp + 1, end = size-1; 

    while(start<end){
        swap(nums[start], nums[end]); 
        start++; 
        end--;
    }

    // printing them to check 
    for (int i = 0; i<size; i++){
        cout<<nums[i]<<" ";
    }
}