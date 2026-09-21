#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;

    while(t--) {
        long long a, b, c;
        cin>>a>>b>>c;

        long long Score1 = abs (a-b);
        long long Score2 = abs ((a+c)-b);

        cout<< max(Score1,Score2)<<endl;
    }
}