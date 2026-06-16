#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,0,1,1,1};
    int tofind;
    int start = 0;
    int end = 5;
    cout<<"Which no.??\n";
    cin>>tofind;

    while(start<=end){
        int mid = start + (end - start)/2;
        cout<<mid;
        // found
        if(arr[mid]==tofind){
            cout<<true;
            return 0;
        }
        else if (arr[mid]>arr[0]){
            // left 
            if (tofind<=arr[mid] && tofind>=arr[0]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            // right sorted 
            if (tofind>=arr[mid] && tofind<=arr[5]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
                
        }


    }
}
    cout<<"not found";

}