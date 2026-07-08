#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string clockwise(string input){

    for (int j = 0; j<2; j++){
    char last = input[input.size()-1];
    for (int i = input.size()-1; i>0; i--){
        input[i] = input[i-1];
    }
    
    input[0] = last;}
    return input;
}

string anticlockwise(string input){
    for (int j = 0; j<2; j++){
    char first = input[0];
    for (int i = 1; i<input.size(); i++){
        input[i-1] = input[i];
    }
    
    input[input.size()-1] = first;}

    return input;
}

int main(){
    string str1 = "amazon";
    string str2;
    cin>>str2;

    if (clockwise(str1)==str2){
        return 1;
    }
    else if (anticlockwise(str1)==str2){
        return 1;
    }
    else{
        return 0;
    }
}