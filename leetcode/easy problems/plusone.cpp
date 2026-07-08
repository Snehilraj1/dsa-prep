#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printarr(int digits[], int n){
    for (int i = 0; i<n; i++){
        cout<<digits[i]<<" ";
    }
}
int main(){
    vector<int>digits = {8,9,9,9};
    int n = digits.size()-1 ; 

        for(int i = n; i>= 0; i--){
            if (digits[i] + 1 == 10){
                digits[i] = 0; 
            }
            else{
                digits[i] += 1; 
                for (int i = 0; i<n+1; i++){
                 cout<<digits[i]<<" ";
    }
                return 0;
            }
        }
        digits.insert(digits.begin(), 1);

        for (int i = 0; i<n+1; i++){
        cout<<digits[i]<<" ";
    }

    return 0;
}