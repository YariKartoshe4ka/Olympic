#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<ll> p(n + 1);
    for (int i = 1; i <= n; ++i)
        p[i] = p[i - 1] + a[i - 1];

    vector<int> l = vector<int>(3, -1);
    l[0] = 0;

    int ibest = 0, jbest = 0;

    for (int j = 1; j <= n; ++j) {
        int m = (p[j] % 3 + 3) % 3;
        if (l[m] == -1) l[m] = j;

        if (j - l[m] > jbest - ibest) {
            jbest = j;
            ibest = l[m];
        }
    }

    if (ibest == jbest)
        cout << -1;
    else
        cout << ibest + 1 << ' ' << jbest;

    return 0;
}
