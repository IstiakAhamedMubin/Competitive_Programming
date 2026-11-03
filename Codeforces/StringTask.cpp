
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {

        char c = tolower(s[i]);

        if (c == 'a' || c == 'o' || c == 'y' ||
            c == 'e' || c == 'u' || c == 'i') {
            continue;
        }

        cout << "." << c;
    }

    return 0;
}
