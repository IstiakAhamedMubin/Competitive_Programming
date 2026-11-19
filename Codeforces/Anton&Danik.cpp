#include<bits/stdc++.h>
using namespace std;
int main () {
     int n;
     cin>>n;
     string word;
     cin>>word;
     int Anton = 0;
     int Danik = 0;

     for (int i =0 ; i<n; i++) {
        
        if(word[i] == 'A') {
            Anton++;
        }
        else{
            Danik++;
        }
     }
     if(Anton>Danik) {
        cout<<"Anton"<<endl;
     }
     else if(Danik>Anton) {
        cout<<"Danik"<<endl;
     }
     else{
        cout<<"Friendship";
     }
     return 0;
}