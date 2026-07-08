#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

    int dimension = matrix.size(); 
    int left = 0;
    int right = dimension -1 ;
    int up = 0;
    int down = dimension - 1;

    while(left<=right && up<=down){
    // right 
    for (int j = left; j<=right; j++){
        cout<<matrix[up][j];
    }
    up++;

    // down 
    for (int j = up ; j<=down; j++){
        cout<<matrix[j][right];
    }

    right--;
    
    // left 
    for (int j = right; j>=left; j--){
        cout<<matrix[down][j];
    }

    down--;
    // up 
    for(int j = down; j>=up; j--){
        cout<<matrix[j][left];
    }
    left++;

}
}