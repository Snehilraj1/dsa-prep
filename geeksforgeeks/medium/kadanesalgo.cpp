#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// we solved it in the order of n 
int main(){
    vector<int>array = {3, 4, -2, 5, 8, 20, -10, 8};

    int prefix = 0;
    int sum = accumulate(array.begin(), array.end(), 0); //order is n 

    for(int i = 0; i<array.size(); i++){
        prefix += array[i]; 

        if(prefix == (sum/2)){
            cout<<"Yes its posible";
            return 0;
        }

    }

    cout<<"No";
    return 0;
}