#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>count(128, 0);
    string s = "aaab"; 
    int start = 0, end = 0, 
    len = s.size(), element = 0, element_1 = 1;

    // finding distinct no of elements 
    for (int i = 0; i<s.size(); i++){
        if (count[s[i]]== 0){
            count[s[i]]++;
            element++;
        }}
    
    count[s[end]]++;
    while(end<s.size()){
        cout<<start<<end<<endl; 
        cout<<len<<endl;

        while(element_1<element){
            end++; 
            count[s[end]]++; 

            if (count[s[end]]==2){
                element_1++;
            }
            
        }
        
        len = min(len, end - start + 1);
        count[s[start]]--; 
        
        if (count[s[start]]==1){
            element_1--;
        }
        start++;


    }
}