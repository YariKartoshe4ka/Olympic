#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> a(36);


void inc(char c, int i = 1) {
    if (c > '9') a[c - 'a' + 10] += i;
    else a[c - '0'] += i;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll ans = 0, i = 0, j = 0, prev_j = -1;
    inc(s[0]);

    while (i < n && j < n) {
        bool f = 1;

        for (int &i : a)
            f = i <= k && f;

        if (f) {
            ans -= max(0ll, (prev_j - i + 2) * (prev_j - i + 1) / 2);
            ans += (j - i + 2) * (j - i + 1) / 2;
            prev_j = j;
            ++j;
            inc(s[j]);
        }
        else {
            inc(s[i], -1);
            ++i;
        }
    }

    cout << ans << endl;
    return 0;
}
