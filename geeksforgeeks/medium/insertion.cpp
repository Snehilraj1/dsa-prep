#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
        #include <vector>

    vector<int> arr = {
    38, 32, 13, 9, 30, 3, 52, 82, 46, 97, 
    0, 32, 9, 45, 25, 1, 31, 90, 93, 28, 
    35, 0, 60, 59, 62, 60, 64, 93, 37, 24, 
    46, 41, 37, 42, 14, 36, 78, 76, 1, 20, 
    31, 56, 25, 89, 48, 0, 45, 4, 53, 85, 
    46, 10, 50, 80, 17, 69, 29, 66, 69, 85, 
    32, 12, 31, 2, 75, 89, 45, 97, 26, 22, 
    20, 40
};
        int total_sum = accumulate(arr.begin(), arr.end(), 0);
        cout<<"the total sum is "<<total_sum;
        int sum = 0;
        int whicharray = 0;
        int ans = INT_MAX;
        int index = 0; 
        
        for(int i = 0; i<arr.size(); i++){
            cout<<i<<endl;
            cout<<"ans"<<ans;
            sum += arr[i]; 
            
            if (sum<total_sum/2){
                ans = min(total_sum - 2*sum, ans);
                
                if (total_sum - 2*sum == ans){
                    index = i+1;
                    whicharray = 1;
                }
            }
            else{
                ans = min(2*sum - total_sum, ans);
                
                if (2*sum - total_sum == ans){
                    index = i+1;
                    whicharray= 2;
                }
                
            }
            
            
            
            
        }
        
        // vector<int>array = {ans, index, whicharray};
        
        cout<<ans<< index + 1<< whicharray; 
        return 0;
    }
