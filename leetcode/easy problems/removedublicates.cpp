#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1, 1, 2, 3, 3, 4, 5, 5, 6}; 
    int count = 1; 

    for (int i = 1; i<arr.size(); i++){
        if (arr[i-1]<arr[i]){
            count++;
        }
    }

    int count2 = 1;
    for (int i = 1; i<arr.size(); i++){
        if (arr[i-1]<arr[i]){
            count2++;
            ( arr[count2-1] = arr[i]);
        }
    }

    for(int i = 0; i<arr.size(); i++)
    cout<<arr[i]<<endl;
}