#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // we can do bubble sort , selected sort and insertion sort but in this problem we have to solve in complexity O(N) 
    vector<int>arr(26, 0); 
    string str1 = "cccaabb"; 
    string ans;
    char start = 'a'; 
    int size = str1.size();

    for (int i = 0; i<size; i++){
        arr[str1[i]-start] += 1;
    }


    for (int i = 0; i<26; i++){
        char c  = 'a' + i;

        while(arr[i]>0){
            ans += c; 
            arr[i]--; 
                }
            }

    cout<<ans;
        }