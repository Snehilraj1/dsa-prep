#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end, int mid){
    vector<int>temp(end-start+1); 
    int index = 0, left = start, right = mid+1;

    while(left<=mid && right<=end){
        if (arr[left]<=arr[right]){
            temp[index] = arr[left];
            left++; 
            index++;
        }
        else { 
            temp[index] = arr[right]; 
            index++; 
            right++;
        }
    }
    //left

    while(left<=mid){
        temp[index] = arr[left]; 
        index++; 
        left++;
    }
    // right 

    while(right<=end){
        temp[index] = arr[right]; 
        index++; 
        right++;
    }

    index = 0; 

    while(index<=(end-start)){ 
        arr[start+index] = temp[index];
        index++;
    }


}
void mergesort(int arr[], int start, int end){
    if (start>=end){
        return;
    }

    int mid = start+ (end - start)/2;
    

    mergesort(arr, start, mid); 
    mergesort(arr, mid+1, end);
    merge(arr, start, end, mid);
}
int main(){
    int arr[] = {6, 7, 4, 3, 3};

    mergesort(arr, 0, 4); 

    for (int i = 0; i<5; i++){
        cout<<arr[i];
    }
}

