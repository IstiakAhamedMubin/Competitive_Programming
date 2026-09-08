#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,h,nSonkhokBondurHight,width=0;
    cin>>n>>h;
    
    for(int i = 0; i<n; i++) {
        cin>>nSonkhokBondurHight;
        if(nSonkhokBondurHight <= h) {
            width+= 1;
        }
        else{
            width+=2;
        }
    }
    
    cout<<width<<endl;

    return 0;
}