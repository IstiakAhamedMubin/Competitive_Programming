/*a + b + c
a + b * c
a * b + c
(a + b) * c
a * (b + c)
a * b * c   Total ai 6 ta expression e exist kore
*/
#include<bits/stdc++.h>
using namespace std;
int main () {

    int a,b,c;
    cin>>a>>b>>c;

    int result = a + b + c;
    result = max (result , a + b * c);
    result = max (result , a * b + c);
    result = max (result , a * b * c);
    result = max (result , (a + b )* c);
    result = max (result , a * (b + c));

    cout<< result;
    return 0;
}
