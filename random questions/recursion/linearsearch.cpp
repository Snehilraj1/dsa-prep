#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool findarray(int arr[], int target, int index){
    if (index==7){
        return 0;
    }
    if (arr[index]==target){
        return 1;
    }
    
    return findarray(arr, target, index+1);
}
int main(){
    int arr[] = {2, 4, 7, 3, 11, 12, 7}; 
    int target = 8; 

    cout<<findarray(arr, target, 0);
}