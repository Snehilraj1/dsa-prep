#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int countvowel(string a, int index){
    if (index>=a.size()){
        return 0;
    }
    if (a[index] == 'a' || a[index] == 'e' ||a[index] == 'i' ||a[index] == 'o' ||a[index] == 'u' ){
        return (1+countvowel(a, index+1));
    }
    else {
        return (countvowel(a, index+1));
    }
}
int main(){
    string a = "amanos";  //only lower case alphabets are allowed
    cout<<countvowel(a, 0);

}