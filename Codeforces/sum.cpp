
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,a,b,c;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
