#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;

    while (t--) {
        int rating;
        cin>>rating;

        if(rating>= 1900) {
            cout<< "Division 1 \n";
        }
        else if ( rating <= 1899 && rating>=1600) {
            cout << "Division 2 \n";
        }
        else if (rating <= 1599 && rating>= 1400) {
            cout << "Division 3 \n";
        }
        else {
            cout << "Division 4" <<endl;
        }
    }
    return 0;
}