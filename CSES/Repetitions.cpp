#include<bits/stdc++.h>
using namespace std;
int main () {
    string s; 
    cin>>s;
    int current = 1;
    int maximum = 1;
    for(int i = 0; i<s.size()-1; i++) {
        if (s[i] == s[i+1]) {
            current ++;
            if(current>maximum){
            maximum = current;
        }
    }
        else{
            current = 1;
           
        }
    }
    cout<< maximum<<endl;
}