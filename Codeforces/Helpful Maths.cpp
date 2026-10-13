#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string digits = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            digits += s[i];
        }
    }

    int n = digits.length();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (digits[j] > digits[j + 1]) {
                char temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << "+";
        cout << digits[i];
    }

    cout << endl;

    return 0;
}
