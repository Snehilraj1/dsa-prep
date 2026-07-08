#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums  = {1,0}; //
    int end = nums.size(); 
    int maxjump = 0; 
    int jumps = 0;
    int current = 0; 

    for(int i = 0; i<end; i++, maxjump--, current--){

        if (i>= end-1){
            cout<<"we did it"<<endl;
            cout<<"with minimum jump "<<jumps;
            return 0; 
        }
        maxjump = max(maxjump, nums[i]);

        if (current==0){
            current = maxjump; 
            jumps+= 1;
        }


    }


}