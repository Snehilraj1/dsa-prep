#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// solving two differnce problem by 2 pointer approach.
// a + b;

int main(){
    vector<int>a = {2, 3, 5, 10 , 50 , 80 };
    int target = 45; 
    int start = 0; 
    int end = a.size() -1;

    while(start<end){
    
        auto diff = max(a[start], a[end]) - min(a[start], a[end]);

        // cout<<diff;
        if (diff == target){
            cout<<a[start]<<" "<<a[end];
            // end the program  
            return 0;
        }
        else if (diff < target){
            end--;
        }
        else if (diff > target){
            start++;
        }

    }

}