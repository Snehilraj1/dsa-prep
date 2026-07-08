#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals = {{3,4},{2,3},{1,2}};

    // giving tags 
    int row = intervals.size();
    for (int i = 0; i<row; i++){
        intervals[i][2] = i;
    }

    // sorting it 
    sort(intervals.begin(), intervals.end());
    vector<int>answer(row, 0);

    for (int i = 0; i<row;i++){
        int target = intervals[i][1];
        int start = 0; 
        int end = row - 1; 
        int ans = -1;

        // binary search 
        while(start<=end){
            int mid = start + (end - start)/2; 

            if (intervals[mid][0]<target){
                start = mid + 1;}
            else {
                end = mid - 1;
                ans = intervals[mid][2]; 
            }

            }

        intervals[i][3] = ans;
        answer[intervals[i][2]] = ans;
        }

    }

