#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
        vector<int>array(128, 0); 
        string s = "abcabcbb";
        int size = 0;
        int start = 0; 
        int end = 0;

        if (s.size()==0){
            cout<< 0;
        }
        else if (s.size()==1){
            cout<< 1;
        }

        array[s[start]]++;

        while(end < s.size()){
            cout<<start<<end<<endl;
            cout<<"the size is "<<size<<endl;
            if (array[s[end]]>1){
                array[s[start]]--;  
                start++; 
            }
            else{
                size = max(size, end - start + 1);
                end++; 
                array[s[end]]++; 
            }
        }


        cout<<size;
        
        } 

