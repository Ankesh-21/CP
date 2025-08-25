#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long k = 1;
    long long coins = 0;
    unordered_map<long long, long long> d;
    d[1] = 3;
    long long ans = 0;

    while (pow(3, k) <= n) {
        coins = pow(3, k + 1) + k * pow(3, k - 1);
        d[(long long)pow(3, k)] = d.count((long long)pow(3, k)) ? d[(long long)pow(3, k)] + coins : coins;
        k++;
    }

    if (coins != 0) {
        ans += coins;
        n -= pow(3, k - 1);
    }

    while (n > 1) {
        // cout << "Entered" << endl;
        int p = (int)(log(n) / log(3));
        ans += d[(long long)pow(3, p)];
        n -= pow(3, p);
    }

    if (n == 1) {
        ans += 3;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
