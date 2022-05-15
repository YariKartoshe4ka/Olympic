#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int i = 0, j = n - 1;

    while (i < n && s[i] == '0')
        ++i;

    while (j > 0 && s[j] == '0')
        --j;

    s = s.substr(i, j - i + 1);
    n = s.size();

    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; ++i)
        pref[i] = pref[i - 1] + (s[i - 1] == '1');

    int l = -1, r = pref[n], mid;

    while (l < r - 1) {
        int cnt_0 = 1e9;

        mid = (l + r) / 2;

        int d = pref[n] - mid;
        int i = 1, j = 1;

        while (j <= n) {
            if (pref[j] - pref[i - 1] < d)
                ++j;

            else if (pref[j] - pref[i - 1] > d)
                ++i;

            else {;
                cnt_0 = min(cnt_0, j - i - d + 1);
                ++i;
            }
        }

        if (mid >= cnt_0)
            r = mid;
        else
            l = mid;
    }

    cout << r << '\n';
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
