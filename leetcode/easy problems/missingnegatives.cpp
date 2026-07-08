#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

vector<vector<int>>grid = {{-2}};
        int row = grid.size(); 
        int col = grid[0].size(); 
        int count = 0;

        int i = row -1; 
        int j = 0; 

        while(true){
            if (i < 0 or j > col-1){
                break;
            }
            if (grid[i][j] < 0){
                count += col - j; 
                i--;
            }
            else {
                j++;
            }

        }

        cout<<count;
}