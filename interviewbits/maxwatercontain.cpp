#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int A[] = {4, 1, 1, 2, 1, 3};
    int n1 = 6; 
    int B = 1; 

    for(int i = 0; i<n1; i++){
        if (A[i] = B){
            for (int j = i; j<n1; j++){
                A[j] = A[j+1];
            }
        }
    }

    for (int i = 0; i<n1; i++){
        cout<<A[i]<<endl;
    }
}