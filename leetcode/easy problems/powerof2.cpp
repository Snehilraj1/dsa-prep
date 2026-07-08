#include<iostream>
using namespace std;
int main(){
    int n = 1;
    bool is2 = true;

    while(n!=1){
        cout<<n;
        if (n%2!=0){
            is2 = false;
            break;
        }
        n /= 2;
        }

    
    if (is2){
        cout<<"Yes";
    }
    else{cout<<"No";}
    }
