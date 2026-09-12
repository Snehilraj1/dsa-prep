#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (a%b==0){
        return b;
    }

    gcd(b, a%b);
    
}
int main(){
    int num1, num2;
    cin>>num1; 
    cin>>num2;

    cout<<gcd(max(num1, num2), min(num1, num2));
}