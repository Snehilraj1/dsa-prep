#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,2,2,4,1,4}; 
    int start = 4; 
    int size = 6; 
    int end = 16; // The true max sum is 140
    int k = 3; 
    int ans = 0;
                    
    while(start <= end){
        int mid = start + (end - start)/2;
        
        // Always initialize your trackers cleanly right where they are used
        int count = 1; 
        int sum = 0;
        
        for(int i = 0; i < size; i++){
            if ((sum + arr[i]) <= mid){
                sum += arr[i];
            }
            else {
                count += 1;
                sum = arr[i]; 
            }
        }

        
        if (count <= k){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout << ans;
    return 0;
}