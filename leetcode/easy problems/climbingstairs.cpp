#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int stairs(int n){
    if (n<=1){
        return 1;
    }

    return (stairs(n-1)+stairs(n-2));
}
int main(){
    int n; 
    cin>>n;
    stairs(n);
}