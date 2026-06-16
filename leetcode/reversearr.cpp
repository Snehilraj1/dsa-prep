#include<iostream>
using namespace std;
int main(){
int arr[] = {1, 3, 4, 5, 6 };

for(int i = (sizeof(arr)/4)-1; i>=0; i--){
    arr[i] = arr[(sizeof(arr)/4)-i];
}

for(int i = 0; i< 5; i++){
    cout<<arr[i]<<endl;
}
}