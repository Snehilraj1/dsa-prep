#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void combination(string& digits, vector<string>& letters, int index, string& temp, vector<string>& ans){
    if (index>=digits.size()){
        ans.push_back(temp); 
        return;
    }
    int index_number = int(digits[index] - '0'); 

    for (int i = 0; i<letters[index_number].size(); i++){
        temp += letters[index_number][i]; 
        combination(digits, letters, index+1, temp, ans); 
        temp += letters[index_number][i];
    }

}
int main() {
    string digits = "23"; 
    vector<string>letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string>ans; 
    string temp; 

    combination(digits, letters, 0, temp, ans); 
    for (int i = 0; i<ans.size(); i++){
        cout<<ans[i]; 
        cout<<" ";
    }

}