#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // i = 1; x = 10; v = 5; l = 50; c = 100; d = 500; m = 1000; 

    string roman = "LVIII"; 
    int temp = 0;
    int add = 0;
    int current = 0;

    for (int i = 0; i<roman.size(); i++){

        cout<<add<<endl;
        cout<<"the temp is"<<temp<<endl;
        int prev = current; 
        if (roman[i]=='I'){
            current = 1;
        }
        else if (roman[i]=='V'){
            current = 5;
        }
        else if (roman[i]=='X'){
            current = 10;
        }
        else if (roman[i]=='L'){
            current = 50;
        }
        else if (roman[i]=='C'){
            current = 100;
        }
        else if (roman[i]=='D'){
            current = 500;
        }
        else if (roman[i]=='M'){
            current = 1000;
        }

        if (i==0){
            temp += current;
        }
        else if (current>prev and i!= 0){
            add = current - temp + add;
            temp = 0;
        }
        else if (current==prev){
            temp += current;
        }
        else {
            add += temp; 
            temp = current;
        }
    
}

add += temp;

cout<<add; }