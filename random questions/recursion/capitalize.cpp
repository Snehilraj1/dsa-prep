#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void capitalize(string &a, int index){

    if (index==a.size()){
        return;
    }
    a[index] = a[index] - 'a' + 'A';
    capitalize(a, index+1);
}
int main(){
    string a = "thisisaword";
    capitalize(a, 0); 

    cout<<a; 

}