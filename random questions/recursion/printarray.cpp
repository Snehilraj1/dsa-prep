#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void arrayrprint(int size, int arr[]){
    if (size>0){
    arrayrprint(size-1, arr);
    }
    cout<< arr[size];

}
int main(){
    int array[] = {3, 7, 6, 2, 8};
    arrayrprint(4, array);


}