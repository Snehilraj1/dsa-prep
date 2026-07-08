#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {0}; 
    int end = nums.size();
    int maxjump = 0;  

    for(int i = 0; i<end; i++, maxjump--){

        if (i == end-1){
            cout<<"we did it";
            return 0; 
        }
        maxjump = max(maxjump, nums[i]);

        cout<<maxjump<<endl;

        if (maxjump<=0){
            cout<<"we failed it";
            return 0;
        }

    }
}