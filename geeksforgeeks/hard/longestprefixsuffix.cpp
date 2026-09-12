#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abab";
    vector<int>lps(s.size()); 

    int pointer1 = 0, index = 1;

    while(index<s.size()){

        if(s[index]==s[pointer1]){
            lps[index] = pointer1+1; 
            index++; 
            pointer1++;
        }

        else{
            if (pointer1==0){
                lps[index]=0; 
                index++;
            }
            else{
            pointer1 = lps[pointer1-1]; }

        }
        }
    
    
    for (int i =  0; i<s.size(); i++){
        cout<<i<<". "<<lps[i]<<endl;
    }
    
       
}