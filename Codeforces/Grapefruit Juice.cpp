#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        long long p;
        cin >> n >> k >> p;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long sum = 0;

        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
        long long ans = sum;
        long long usedFruits = 0;

        for(int j = 1; j <= n/k; j++) {
            for(int i = (j-1)*k; i < j*k; i++) {
                usedFruits += a[i];
            }
            long long total = j*p + sum - usedFruits;
            ans = max(ans, total);
        }
        cout << ans << endl;
    }
    return 0;
}