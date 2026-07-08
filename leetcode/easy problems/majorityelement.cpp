#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int>& arr, int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"#####################"<<endl;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 5, 5, 5, 5, 5}; //
    int n = nums.size(); 
    int count = 0; 
    int number = nums[0]; 

    for (int i = 0; i<n; i++){

        if (number == nums[i]){
            count++;
        }
        else{
            count--;
        }

        if (count==0){
            count++; 
            number = nums[i];
        }
    }

    cout<<number;

}