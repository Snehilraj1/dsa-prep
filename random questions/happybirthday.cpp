#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// the recursive way of solving the problem same complexity as iterative (for loop)
void birthday(int n){
    if (n==0){
        cout<<"Happy Birthday!";
        return;
        // if we didn't had the stopping condition then it 
        // would let to stack overflow for, 
        // multiple funcs on stack getting created 
    }
    else{
        cout<<n<<" days left for birthday!\n";
        birthday(n-1);

    }
}
int main(){
    birthday(6); 
    return 0;

}