#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "is2 sentence4 This1 a3"; 
    vector<string>arr(9); 
    string answer;
    
    string word = ""; 
    char num = '\0'; 

    for (int i = 0; i<s.size(); i++){

        if (s[i] == ' '){
            arr[num - '1'] = word;
            num = '\0'; 
            word = "";
        }
        else{
            if (s[i]>=48 and s[i]<=58){
                num = s[i]; 
            }
            else {
                word += s[i];
            }
        }


    }
    arr[num - '1'] = word;
    for (int i = 0; i<9; i++){
        if (arr[i]!=""){
        answer += arr[i] + ' ';}
    }

    }

    
