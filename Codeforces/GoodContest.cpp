#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int all = min ({a1,a2,a3});
        
        int answer = n - all;

        cout<< answer<<endl;

    }
}