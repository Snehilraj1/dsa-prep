#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int>count(3); 
        string s = "12121"; 
        int start = 0, end = 0, unique = 1, len = s.size()+1; 
        count[s[end]-'0']++;
        
        while(end<s.size()){
            cout<<start<<end<<endl; 
            while (unique<3) { 
                end++; 
                if (end>=s.size()){
                    if (len==s.size()+1){
                        cout<<-1; 
                        return 0;
                    }
                    else{
                        cout<<len; 
                        return 0;
                    }
                    
                }
                count[s[end]-'0']++; 
                
                if (count[s[end]-'0']==1){
                    unique++;
                    }

            }

            len = min(len, end - start + 1); 
            count[s[start]-'0']--; 
            if (count[s[start]-'0']==0){
                unique--; 
            }
            start++; 
            
        }
    
}