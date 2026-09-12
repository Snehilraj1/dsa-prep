#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void substring(vector<int>& arr, vector<int>temp, vector<vector<int>>& answer, int index){
    if (index>=arr.size()){ 
        answer.push_back(temp);
        return;
    }

    substring(arr, temp, answer, index+1);
    temp.push_back(arr[index]);
    substring(arr, temp, answer, index+1);
}
int main(){
    vector<int>arr = {1, 2, 3};
    vector<vector<int>>answer;
    vector<int>temp;
    substring(arr, temp, answer, 0); 


    for (int i = 0; i<answer.size(); i++){ 
        cout<<"{";
        for(int j = 0; j<answer[i].size(); j++){ 
            cout<<answer[i][j];
        }
        cout<<"}";
    }
}