#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int divisible(string& s, int index, int number, int& divident){
    if (index>=s.size()){
        if (number%divident==0){
            return 1; 
        }
        else{
            return 0;
        }
    }
    return (divisible(s, index+1, 10*number + int(s[index])-'0', divident)+divisible(s, index+1, number, divident));
}
int main() {
    string s = "369"; //
    int k = 3;  //


    cout<<divisible(s, 0, 0, k)-1;

}