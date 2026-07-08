#include<iostream>
using namespace std;
int main(){
    int input = 456; 
    int num = 0;

    for(;input!=0;){
            num = num*10 + (input%10);
            input = input/10;
    }

    input = num;
    cout<<input; 


}

