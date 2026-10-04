

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void  countways(vector<int>& coins, int target, int& answer){
        if (target<=0){
            if (target==0){
                answer++;
                return; 
            }
            else{
                return;
            }
        }


        for (int i = 0; i<coins.size(); i++){
            countways(coins, target - coins[i], answer);
        }
    }
int main() {
    vector<int>coins = {1, 2, 3}; 
    int target = 4; 
    int answer = 0; 


    countways(coins, target, answer);
    cout<<answer;
}