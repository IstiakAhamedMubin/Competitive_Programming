#include<bits/stdc++.h>
using namespace std;
int main () {
    int t,l,a,b;
    cin>>t;

   while (t--) {
    cin>>l>>a>>b;

    bool strawberry [22] = {false};
    bool blueberry [22] = {false};

    //Aubrey's turn
    int position = 0;
    
    while(!strawberry[position]) {
        strawberry [position] = true;
        position = (position + a) % l;
    }
    
    //sunny's turn
    position = 0;
    
    while(!blueberry[position]) {
         blueberry [position] = true;
         position = (position + b) % l;
    }
    int count = 0;
    for (int i = 0 ; i < l; i++) {
         if(strawberry[i] && blueberry [i]) {
            count ++;
         }
    }
    cout<< count <<endl;
   }
}