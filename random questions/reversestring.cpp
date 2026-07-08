#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse_using_size(string s){
    // using s.size() 

    int start = 0, end = s.size()-1; 
    
    while(start<end){
        swap(s[start], s[end]); 

        start++; 
        end--;
    }

    cout<<s; 

}

void reverse_without_size(string s){
    int size;
    for (int i = 0;; i++){
        if (s[i] == '\0'){
            size = i;
            break;
        }
    }

    int start = 0; 
    int end = size-1; 
    
    while(start<end){
        swap(s[start], s[end]); 

        start++; 
        end--;
    }

    cout<<s; 
}
int main(){
    string s = "rohit"; 

    reverse_using_size(s);
    cout<<endl; 
    reverse_without_size(s);
    
    
}