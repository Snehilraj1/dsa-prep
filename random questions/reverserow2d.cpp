#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[][4], int row, int col){

    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"#####################"<<endl;

}
int main(){
    // we have to reverse the rows of a 2d array 
    int arr[3][4] = {2,3,4,5,1,2,6,8,4,9,3,2};
    int row  = 3; 
    int col = 4; 

    printarr(arr, row , col);
    for(int i = 0; i<row; i++){
        int start = 0; 
        int end = col-1; 
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++; 
            end--;
        }
    }

    printarr(arr, row, col);

}