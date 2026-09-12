#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int two(int n){
    if (n<=0){
        return 1;
    }
    return (2*two(n-1));
}
int main(){
    int n; 
    cin>>n;
    cout<<two(n);
}