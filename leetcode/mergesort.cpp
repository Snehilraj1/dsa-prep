#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int> num1){
    for (int i = 0; i<num1.size(); i++)
    cout<<num1[i];
}
int main(){
    vector<int>num1 = {1, 2,3, 0, 0, 0}; 
    vector<int>num2 = {4, 5,6};
    int m = 3, n = 3;
        vector<int>ans(m+n);
        int pointer1 = 0, pointer2 =0, pointer3 = 0;

        while(pointer2<n){
            cout<<pointer1<<pointer2<<endl;
            if (num1[pointer1]>=num2[pointer2] or num1[pointer1]==0){
                ans[pointer3] = num2[pointer2];
                pointer2++; 
                pointer3++;
            }
            else if (num1[pointer1]<=num2[pointer2]) {
                ans[pointer3]= num1[pointer1];
                pointer3++; 
                pointer1++;
            }
        }

        while(pointer3<m+n){
            ans[pointer3] = num1[pointer1];
            pointer3++; 
            pointer1++;
        }

        num1 = ans; 

        printarray(num1);


}