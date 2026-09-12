#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void swapping(int *a, int *b){ 
    swap(*a, *b);
}
int main(){
    int first = 10; 
    int second = 20;

    swapping(&first, &second);

    cout<<first<<second;
}