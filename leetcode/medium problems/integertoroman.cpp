#include<iostream>
#include <bits/stdc++.h>
using namespace std;

char romanconversion(int i){

    if (i == 0){
                return 'I';
            }
            else if (i == 1){
                return 'V';
            }
            else if (i == 2){
                return 'X';
            }
            else if (i == 3){
                return 'L';
            }
            else if (i == 4){
                return 'C';
            }
            else if (i == 5){
                return 'D';
            }
            else if (i == 6){
                return 'M';
            }
}

string roman(int num){ //40
    int array[] = {1, 5, 10, 50, 100, 500, 1000}; 
    int sum = 0;
    int current = 0; 
    string ans = "";

    while(sum != num){
        int required = abs(num-sum);


        for (int i = 0; i<7; i++){

            if (abs(required-array[i])<abs(required-array[current])){
                current = i;
            }

        }


        if (sum>num){
            ans = romanconversion(current)+ans;
            sum -= array[current];
        }
        else {
            ans = ans + romanconversion(current);
            sum += array[current];
        }
        
        
    }

    return ans;



}
int main(){
    int num = 58; 
    int i = 1;
    string ans = ""; 

    while (num != 0){
        ans = roman((num%10)*i)+ans; 
        num = num/10;
        i = i*10;
    }

    cout<<ans;

    

}
