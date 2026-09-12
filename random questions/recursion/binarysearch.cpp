#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool binarysearch(int arr[], int target, int start, int end){
    int mid = start + (end-start)/2;

    if (start>end){
        return 0;
    }

    if (arr[mid]==target){
        return 1;
    }
    else if (arr[mid]>target){
        end = mid-1;
    }
    else {
        start = mid+1;
    }

    return binarysearch(arr, target, start, end); 

}
int main(){
    int arr[] = {2, 5, 7, 11, 12, 33};
    int target = 34, start = 0; 

    int end = sizeof(arr)/sizeof(arr[0])-1;
    cout<<binarysearch(arr, target, start, end);
}