#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sorting(int arr[], int start, int end){ 
    int pivot = arr[end], pos = start;

    for(int i = start; i<=end; i++){ 

        if (arr[i]<=pivot){ 
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quicksort(int arr[], int start, int end){ 
    if (start>=end){ 
        return;
    }

    int pivot = sorting(arr, start, end);

    quicksort(arr, start, pivot-1); 
    quicksort(arr, pivot+1, end); 
}

int main(){
    int arr[] = {4, 5, 3, 4, 2};  //215678

    quicksort(arr, 0, 4); 

    for (int i = 0; i<5; i++){ 
        cout<<arr[i];
    }
}