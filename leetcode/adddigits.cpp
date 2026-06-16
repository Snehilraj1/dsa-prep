#include<iostream>
using namespace std;
int main(){
    int input, num;
    input = 5656;
    num = 0; 

    while(input>=10){
        for(;input!=0;){
            num = num + (input%10);
            input = input/10; 
        }
        
        input = num;
        num = 0;


    }

    cout<<input;
}