#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "tletxrezd";
    int k = 8, start = 0, end = 0, unique = 1, len = -1; 
    vector<int>count(26); 
    count[s[end]-'a']++;

    while(end<s.size()){
        if (unique==k){
            len = max(len, end - start + 1);
        }
        end++;
        if (count[s[end]-'a']==0){
            unique++;
        }
        count[s[end]-'a']++; 
        

        while(unique>k){
            count[s[start]-'a']--; 
            if (count[s[start]-'a']==0){
                unique--;
            }
            start++; 

        }
        

    }

cout<<len;
return 0;}

