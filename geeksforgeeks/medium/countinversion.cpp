#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void mergencount(vector<int>& arr, int start, int end, int mid, int& count){ 
    vector<int>temp(end-start+1); 
    int left = start, right = mid+1, index = 0;

    while(left<=mid && right<=end){ 
        if (arr[left]>arr[right]){ 
            count = count + (mid - left + 1);
            temp[index] = arr[right]; 
            index++; 
            right++;
        }
        else { 
            temp[index] = arr[left]; 
            index++, left++;
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
void mergesort(vector<int>& arr, int start, int end, int& count){ 
    if (start>=end){ 
        return;
    }

    int mid = start + (end - start)/2; 

    mergesort(arr, start, mid, count); 
    mergesort(arr, mid + 1, end, count);
    mergencount(arr, start, end, mid, count);
}
int main(){
    vector<int>arr = {5, 1, 2, 3, 4}; 
    int count = 0;
    mergesort(arr, 0, arr.size()-1, count);

    cout<<count;
    for (int i = 0; i<arr.size(); i++){
        cout<<arr[i];
    }

} 