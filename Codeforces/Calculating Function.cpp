#include<bits/stdc++.h>
using namespace std;
int main () {
    long long n;
    cin>>n;
    long long result;

    if(n%2 == 0) {
        result = n/2;
        cout<< result <<endl;
    }
    else if(n%2 != 0) {
        result = n/2 - n;
        cout<< result <<endl;
    }
    return 0;
}