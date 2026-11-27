#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    string s; 
    for(int i = 0; i < t; i++) {
    cin >> s;

    int first = (s[0] - '0' + s[1] - '0' + s[2] - '0');
    int second = (s[3]-'0') + (s[4]-'0') + (s[5]-'0') ;

    if(first == second) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
   }
    return 0;
}