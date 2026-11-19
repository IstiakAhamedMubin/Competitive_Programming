#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,v;
    cin>>n;

    for (int i = 0; i<n; i++) {

        cin>>v;
        if(v == 1) {
            cout<< "HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}