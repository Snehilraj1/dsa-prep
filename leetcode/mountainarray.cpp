#include<iostream>
using namespace std;
int main(){
    int array[]= {1, 2, 0};
    int start = 0; 
    int end = 2;

    while(start<=end){
        int mid = (start+end)/2;

        if(array[mid-1]<array[mid] && array[mid]>array[mid+1]){
            cout<<mid;
            return 0;
        }
        else if(array[mid]<array[mid+1]){
            start = mid + 1; 
        }
        else{
            end = mid -1;
        }

    }

}