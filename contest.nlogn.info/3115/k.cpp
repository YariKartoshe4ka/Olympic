#include <bits/stdc++.h>

using namespace std;
using ll = long long;


const int MAX_N = 1e6;
vector<int> p(1e6 + 1, -1);


int main() {
    for (ll i = 2; i <= MAX_N; ++i) {
        if (p[i] != -1) continue;
        p[i] = i;
        for (ll j = i * i; j <= MAX_N; j += i)
            p[j] = i;
    }

    int n, m;
    cin >> n >> m;

    ll mn = 1e10, ans = 0;

    for (int i = n; i <= m; ++i) {
        vector<pair<int, int>> d;

        int x = i;
        while (p[x] != -1) {
            if (d.size() && d.back().first == p[x]) ++d.back().second;
            else d.push_back({p[x], 1});
            x /= p[x];
        }

        ll sum = 1;
        for (auto [pr, pw] : d) {
            ll bf = 1, cr = 1;
            for (int j = 1; j <= pw; ++j) {
                cr *= pr;
                bf += cr;
            }
            sum *= bf;
        }

        if (sum * ans < mn * i) {
            mn = sum;
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}
