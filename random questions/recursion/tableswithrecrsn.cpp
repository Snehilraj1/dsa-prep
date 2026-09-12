#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void table(int n, int till ){
    if (till==1){
        cout<<n*till<<endl;
        return;
    }
    table(n, till-1);
    cout<<n*till<<endl; 
}
int main(){
    int n, till;
    cout<<"Table of which number>"<<endl;
    cin>>n; 
    cout<<"Till where?"<<endl; 
    cin>>till;
    table(n, till);
}