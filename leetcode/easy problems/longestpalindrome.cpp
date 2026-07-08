#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// the last ascii number is 128 
int main(){
    string s = "aaaaaa"; //
    int n = s.size(); 
    vector<int>track(128, 0);
    int size = 0;

    for(int i = 0; i<n; i++){
        track[s[i]]++; 
    }

    for (int i=0; i<128; i++){
        if (track[i]/2>=1){
            size += track[i]-track[i]%2; 
            track[i] = track[i]%2;
        }
    }

    for (int i = 0; i<128; i++){
        if (track[i]%2 == 1){
            size += 1;
            break;
        }
    }

    cout<<size;
}