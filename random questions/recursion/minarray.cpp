#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[], int index){
    if (index>=4){
        return arr[index];
    }

    return (min(arr[index], findmin(arr, index+1)));
}
int main(){
    int array[] = {7, 2, 4, 1, 6};
    cout<<findmin(array, 0);

}