#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,a,b;
    cin>>n;
    int capacity = 0, current = 0;
    
    for (int i = 0; i<n; i++) {
        cin>>a>>b;
        current = current - a + b;

       /* if(current>capacity){
            current = capacity;(aita use kore capacity update korte pari or niche max function use kore korte pari)
        } */
            capacity = max(current,capacity);   
    }
    cout<< capacity << endl;
    return 0;
}