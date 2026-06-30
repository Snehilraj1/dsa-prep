#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// we just convert the problem to 2 sum just by assuming one pointer
// solving it in order of n^2 
int main(){
    vector<int>arr = {166 ,200 ,157 ,139 ,127 ,19 ,48 ,97, 114,189 ,170, 15 ,14};
    int n = arr.size();
    int target = 208; 

    sort(arr.begin(), arr.end()); 

    for(int i = 0; i<n-2; i++){
        int new_target = target - arr[i];
        int pointer1 = i + 1; 
        int pointer2 = n-1;

        while(pointer1<=pointer2){
            if (arr[pointer1] + arr[pointer2] == new_target){
                cout<<pointer1<<pointer2<<new_target;
                return 0; 
            }
            else if (arr[pointer1] + arr[pointer2] > new_target){
                pointer2--;
            }
            else{
                pointer1++;
            }

        }
    }
    return 0;
}