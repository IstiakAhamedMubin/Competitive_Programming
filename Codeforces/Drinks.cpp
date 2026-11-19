#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>> n;
    double sum = 0,value;
    double output;
    for (int i=0;i<n;i++) {
        cin>>value;
        sum = sum + value;
    }
     output = double(sum/n);
     cout<< output <<endl;
     return 0;
}