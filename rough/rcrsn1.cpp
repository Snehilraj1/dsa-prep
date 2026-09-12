#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void func(int n){
    if (n==1){
        cout<<1<<endl;
    }
    else {
        func(n-1); 
        cout<<n<<endl;
    }
}
int main(){
    func(10);
}