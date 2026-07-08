#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// solved it using kadenes algorithm in the order of n 
int main(){
    int prefix = INT_MIN;
    vector<int>array = {4, -6, 2, 8};
    
    // int prefix = 0; 
    int sum = 0;

    for(int i = 0; i<array.size(); i++){
        sum += array[i]; 

        prefix = max(prefix, sum);

        if(sum < 0){
            sum = 0;
        }

    }

    cout<<prefix;
}