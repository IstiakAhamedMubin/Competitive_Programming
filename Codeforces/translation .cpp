#include<bits/stdc++.h>
using namespace std;
int main () {
    string s,t;
    cin>>s>>t;

    reverse(t.begin(), t.end());

    if(t==s) {
        cout<< "YES" <<endl;
    }
    else {
        cout<< "NO";
    }
    return 0;
}