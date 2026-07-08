#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {5, 4, 3,}; //
    int target = 2; //
    int start = 0; 
    int end = 0; 
    int sum = arr[0];
    int n = arr.size();

    while(end != n){
        // cout<<" start "<<start<<" end "<<end<<endl;
        // cout<<"sum is "<<sum<<endl;
        if (sum>target){
            sum -= arr[start]; 
            start++;
        }
        else if (sum< target){
            end++; 
            sum += arr[end];
        }
        else{
            cout<<start<<end;
            return 0;
        }
    }

    cout <<"cant print"; 
    return 0;
}
