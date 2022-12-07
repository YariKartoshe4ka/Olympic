#include <bits/stdc++.h>

using namespace std;
using ll = long long;


const int MAX_N = 1e6;
vector<bool> p(MAX_N + 1, 1);


int main() {
    for (ll i = 2; i <= MAX_N; ++i) {
        if (!p[i]) continue;
        for (ll j = i * i; j <= MAX_N; j += i)
            p[j] = 0;
    }

    int m, n;
    cin >> m >> n;

    bool f = 0;
    for (int i = m; i <= n; ++i) {
        f = f || p[i];
        if (p[i]) cout << i << endl;
    }

    if (!f) cout << "Absent" << endl;

    return 0;
}
