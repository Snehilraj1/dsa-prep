#include<iostream>
using namespace std;
int main(){
    int input, i;
    cout<<"Enter a number\n";
    cin>>input;
    i = 1;
    for(int n = 1; input>=n ;){
        i++;
        n = i*i; 
        }
    
    cout<<"The answer is "<<(i-1);

}