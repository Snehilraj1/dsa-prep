#include<iostream>
using namespace std;
int main(){
    int piles[] = {30,11,23,4,20}; //
    int start = 1;
    int end = 30; // 
    int hours = 6; //
    int ans = 0; 

    while(start<=end){
        int mid = start + (end - start)/2;
        int time = 0;
        for(int i = 0; i<(sizeof(piles)/4); i++){
            if (piles[i]%mid == 0){
                time += piles[i]/mid;}
            else{
                time += piles[i]/mid + 1; 
            }
        }
        // cout<<time<<endl;
        if (time > hours){
            start = mid + 1;
        }
        else {
            ans = mid; 
            end = mid - 1;
        }

    }
    cout<<ans;

}
