#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string address = "1.1.1.1"; 
    string ans; 

    for (int i = 0; i<address.size(); i++){
        if (address[i]=='.'){
            ans += "[.]"; 
        }
        else{
            ans += "1";        }
    }

    cout<<ans;
}