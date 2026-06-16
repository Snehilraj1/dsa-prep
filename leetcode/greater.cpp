#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,3,3};
    int size = (sizeof(arr)/4); 
    int start = 1; 
    int end = size;
    int count = 0;
//2 4 
    while(start<=end){
        int mid = start + (end-start)/2;
        for(int i = 0; i<size; i++){
            if (arr[i]>=mid){
                count+= 1;
            }
        }
        if (count == (mid)){
            cout<<"the answer is "<<count;
            return 0;
        }
        else if (count < (mid)){
            end = mid - 1;
        }
        else{
            start = mid + 1; 
        }
        count = 0;
        }

    cout<<"answer is -1";
    }
