#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int checkpalindrome(string a, int pointer1, int pointer2){
    if (pointer1>=pointer2){
        return 1;
    }
    if (a[pointer1]==a[pointer2]){
        return (checkpalindrome(a, pointer1+1, pointer2-1));
    }
    else {
        return 0;
    }

}

int main(){
    string a = "malayalam";
    cout<<checkpalindrome(a, 0, a.size()-1);
}