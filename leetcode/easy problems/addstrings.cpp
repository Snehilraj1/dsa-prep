#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string num1 = "9", num2 = "9", answer = "";
    int bigger = max(num1.size(), num2.size());
    int smaller = min (num1.size(), num2.size()); 


    if (num1.size()>num2.size()){
        for (int i = 0; i<(bigger-smaller); i++){
            num2 = '0'+num2;
        }
    }
    else if (num1.size()<num2.size()){
        for (int i = 0; i<(bigger-smaller); i++){
            num1 = '0'+num1;
        }
    }
    int carry = 0;
    int pointer = bigger - 1;

    while(true){
        char temp = '\0';

        // loop breaking 
        if (pointer == -1){
            if (carry == 1){
                answer = '1'+ answer;
                cout<<answer;
                return 0;
            }
            else {
                cout<<answer; 
                return 0; 
            }
        }
        
        // logic 
        temp = (char)(num1[pointer] + num2[pointer]- '0'); 

        if (temp+carry>57){
            temp = (temp + carry)- 58 + '0'; 
            carry = 1;
        }
        else {
            temp = temp + carry;
            carry = 0;
        }
    

        answer = temp + answer;

        pointer--; }


    cout<<answer;


        


}
