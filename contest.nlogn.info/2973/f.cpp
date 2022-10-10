#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll ans = 0;
    for (int i = 0; i < k; ++i)
        ans += a[i];

    cout << ans << endl;
    return 0;
}
