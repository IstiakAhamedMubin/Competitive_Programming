#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; 
    cin>>n;
    string s;
    cin>>s;

    set<char>p;
    for (int i = 0; i<n; i++) {
        p.insert(toupper (s[i]));
    }
    if (p.size () == 26) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}