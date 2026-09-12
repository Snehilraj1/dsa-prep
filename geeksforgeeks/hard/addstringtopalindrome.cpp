#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcd", s1 = s; 
    reverse(s1.begin(), s1.end()); 
    s = s+'$'+s1; 

    int pointer1 = 0, pointer2 = 1; 
    vector<int>lps(s.size()); 

    while(pointer2<s.size()){
        if (s[pointer2]==s[pointer1]){
            lps[pointer2] = pointer1+1;
            pointer2++; 
            pointer1++;
        }
        else{
            if (pointer1==0){
                pointer2++;
            }
            else{
            pointer1 = lps[pointer1-1]; }

        }
    }

    int x = lps[s.size()-1];

    s1 = s1+ s.substr(1, s1.size()-x);

    cout<<s1; 




}