#include<iostream>
using namespace std;
int main(){
    int stalls[] = {1, 2, 4, 8, 9}; // 
    int cows = 3; //
    int start = 1; 
    int sort

    while(start<=end){
        int mid = start + (end - start)/2;
        cout<<"The mid is "<<mid<<endl;
        int count = 0;

        for(int i = 0; i<cows; i++){
            for(int k = 0; k<size; k++){
            if (stalls[k]>= min + mid*(i+1)){
                count += 1;
                break;
            } }}
        cout<<"The count is "<<count<<endl;
        if (count>=cows-1){
            ans = mid; 
            start = mid +1;
        }
        else{
            end = mid - 1; 
        }
    }
    cout<<ans;

}