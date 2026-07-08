#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>citations = {1, 2, 100}; 
    int n = citations.size();
    int end = n-1; 
    int start = 0; 
    int ans = 0;

    while(start<=end){
        int mid = start + (end - start)/2;
        
        if (citations[mid]>= (n-mid)){
            ans = mid+1; 
            end = mid -1;
        }
        else {
            start = mid + 1;
        }

    }

    cout<<ans;
}