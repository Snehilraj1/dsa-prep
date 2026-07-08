#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {3,3,7,7,10,11,11};
    int start = 0; 
    int end = nums.size()-1; 
    int right = false; 
    int left = false;
    int rightnum=0;
    int leftnum=0;
    int mid = 0;  

    while(start<end){

        mid = start + (end-start)/2; 
        cout<<"the start is "<<start<<endl;
        cout<<"the mid is "<<mid<<endl;
        cout<<"the end is "<<end<<endl;

            if (nums[mid+1]>nums[mid]){
                right = true;
            }
            else if (nums[mid-1]<nums[mid]){
                left = true;
            }
            else {
                cout<<nums[mid];
                return 0;
            }

            if (right){
                rightnum = end-mid; 
                leftnum = mid - start-1;
            }
            else if (left){
                rightnum = end-mid-1; 
                leftnum = mid - start;
            }

            if (rightnum%2!=0){
                if (right){
                    start = mid +1;
                }
                else{
                    start = mid +2;
                }
            }
            else{
                if (left){
                    end = mid -1;
                }
                else{
                    end  = mid - 2; 
                }
            }

            right = false; 
            left = false;
        }

    cout<<nums[start];

}