#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> p(n + 1);
    for (int i = 1; i <= n; ++i)
        p[i] = p[i - 1] + a[i - 1];

    int j = 0;
    ll mx = a[0];

    for (int i = 0; i < n - 1; ++i) {
        while (a[i] + a[i + 1] >= a[j] && j < n)
            ++j;

        if (p[j] - p[i] > mx)
            mx = p[j] - p[i];
    }

    cout << mx << endl;
    return 0;
}
