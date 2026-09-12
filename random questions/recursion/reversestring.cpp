#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string reverse(string a, int pointer1, int pointer2){
    if (pointer1>=pointer2){
        return a;
    }
    swap(a[pointer1], a[pointer2]);

    return reverse(a, pointer1+1, pointer2-1);
}
int main(){
    string a = "rohit";
    cout<<reverse(a, 0, a.size()-1);
}