#include<iostream>
using namespace std;
int main(){
    int x = -121; 
    int num = 0;

    for(int i = x;i!=0;){
            num = num*10 + (i%10);
            i = i/10;


    cout<<num;
    }
    // if (num==x){
    //         cout<<"Its a palindrome.";
    //         }
    // else{
    // cout<<"No it isnt";}

}

