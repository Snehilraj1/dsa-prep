#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// 1, 2, 3, 4, 5, 6, 7, 8, 9
void move(int n, int rate, int position){

    // reverse condition 
    if (position + rate > n or position + rate <= 0){
        if (position-rate>0 and position-rate<=n){
            position = position - rate;
        }
        rate = -rate*2;
    }
    
    // winning condition 
    if ((position + rate > n or position+rate <= 0) and (position - rate > n or position-rate <= 0)){
        return;
    }

    // recursive condition 
    move(n, rate, position+rate);
}
int main() {
    int n = 1;
    move(n, 2, 0); 
}