#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// solving two sum problem by 2 pointer approach 

int main(){
    vector<int>a = {-500, -450, -400, -350, -300, -250, -200, -150, -100, -50, -12, 15, 60, 110, 160, 210, 260, 310, 360, 410, 460, 510};
    int target = 3; 
    int start = 0; 
    int end = a.size() -1;

    while(start<end){
        cout<<start<<end<<endl;
        if (a[start] + a[end] == target){
            cout<<start<<end;
            // end the program  
            return 0;
        }
        else if (a[start] + a[end] < target){
            start++;
        }
        else if (a[start] + a[end] > target){
            end--;
        }

    }

}