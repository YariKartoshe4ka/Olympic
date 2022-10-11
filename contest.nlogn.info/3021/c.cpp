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


    int imin = 0, ibest = 0, jbest = 1;
    for (int j = 1; j <= n; ++j) {
        if (p[j] - p[imin] > p[jbest]  - p[ibest]) {
            jbest = j;
            ibest = imin;
        }

        if (p[j] <= p[imin])
            imin = j;
    }

    cout << ibest + 1 << ' ' << jbest << endl;
    return 0;
}
