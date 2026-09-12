#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void findlps(vector<int>& lps, string s){

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
}

int pattern(string haystack, string needle){

    cout<<haystack<<endl; 
    cout<<needle<<endl;
    vector<int>lps(needle.size(), 0); 
    findlps(lps, needle); 

    int pointer1 = 0, pointer2 = 0; 

    while(pointer1<haystack.size() and pointer2<needle.size()){
        // cout<<pointer1<<pointer2<<endl;
        if(haystack[pointer1]==needle[pointer2]){
            pointer1++; 
            pointer2++; 

            if (pointer2==needle.size()){
                return 1; 
            }
        }
        else {
            if (pointer2==0){
                pointer1++;
            }
            else{
            pointer2 = lps[pointer2-1]; }

        }
    }

    return -1;
}
int main(){
    string a = "abc", b  = "cabcabca", temp = a; 
    int ans = 1; 
    //abcabcabc

    while(a.size()<b.size()){
        a += temp;
        ans++;
    }


    cout<<pattern(a, b);
    
    if (pattern(a, b) == -1){
        a += a; 
        ans++;
    }
    else{
        cout<< ans;
        return 0;
    }
    
    if (pattern(a, b) == -1){
        cout<< -1;
    }
    else{
        cout<< ans;
    }

    

}