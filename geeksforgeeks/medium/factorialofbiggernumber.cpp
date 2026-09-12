#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number = 15; 
    string ans = "1";
    int multiplier = 2; 
    int carry = 0;
    string tempans = "";

    while(number>=multiplier){
        tempans = ""; 
        int index = ans.size()-1;
        int carry = 0; 
        int temp = 0;

        while(!(index<0 and carry == 0)){
            if (index>=0){
            temp = (ans[index]-'0');
            temp = temp*multiplier;}
            else{
                temp = 0; 
            }
            tempans = char('0' + (temp + carry)%10) + tempans;
            carry = (temp + carry)/10;

            index--;
        }

    multiplier++;
    ans = tempans;}


    }