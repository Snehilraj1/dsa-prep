#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string>strs = {"flower","flow","flight"};
    string ans = strs[0]; 

        for(int i = 1; i<strs.size(); i++){
            int pointer1 = 0; 
            string temp = "";
            for (int j = 0; j<strs[i].size(); j++){
                if (strs[i][j]==ans[pointer1]){
                    temp += ans[pointer1]; 
                    pointer1++;
                }
                else{
                    ans = temp;
                }
            }
            ans = temp;
        }

        cout<< ans;
}