#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int>nums){ 
    for (int i = 0; i<nums.size(); i++)
    cout<<nums[i]<<" ";
}
int main(){
    vector<int>nums = {1,1,1,2,2,3}; 
    int n = nums.size();
    
    int count = 0, num = nums[0], totalcount = 0; 

    for (int i = 0; i<n; i++){
        if (count>=2 and nums[i]==num){
            nums[i]=-1; 
            count++;

        }
        else{
            if (nums[i]==num){
                count++;
            }
            else{
                num = nums[i]; 
                count = 1; 
            }
        }

    }

    int index1 = 0, index2 = 0; 

    while(index2<n){ 
        // index1 searched -1 and index2 searches number 
        if (nums[index1]==-1 and nums[index2]!=-1){ 
            swap(nums[index1], nums[index2]);
            index1++; 
            index2++;
        }
        else if (nums[index1]!=-1 and nums[index2]!=-1){
            index1++; 
            index2++;
        }
        else{
            index2++;
        }
    }

    for (int i = 0; i<n; i++){
        if (nums[i]!=-1){
            totalcount++;
        }
    }

    cout<<totalcount<<endl;

    printarray(nums);



}