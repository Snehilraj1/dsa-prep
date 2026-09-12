#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// ofcourse using the formula of n(n+1)/2 the complexity will be 1 but we have to learn recursion so yeah
int sum(int n){
    if (n<=0){
        return 0;
    }
    return (n+sum(n-1));
}
int main(){
    int n; 
    cin>>n; 
    cout<<sum(n);
}