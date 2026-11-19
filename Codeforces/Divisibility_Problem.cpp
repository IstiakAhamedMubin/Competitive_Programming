#include<bits/stdc++.h>
using namespace std;
int main () {
    int t,a,b;
    cin>>t;
    for(int i = 0; i<t; i++) {
          int count = 0;
          cin>> a>>b;
         if (a%b!=0) {
          count = b - (a % b);
        }
        cout<< count << endl;
    }
}