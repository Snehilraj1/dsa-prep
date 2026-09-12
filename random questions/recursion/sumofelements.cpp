#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sumarray(int arr[], int &sum, int index)
{
    sum += arr[index];
    if (index<(4)){
        sumarray(arr, sum, index+1);
    }

}
int main(){
    int array[] = {3, 4, 5, 7 ,8};
    int sum = 0;
    sumarray(array, sum, 0);
    cout<<sum;


}

// 