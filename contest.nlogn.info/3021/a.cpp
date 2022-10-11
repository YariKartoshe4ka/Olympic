#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i <= k; ++i)
        sum += a[i];

    int ans = sum == m;
    for (int i = 1; i < n - k && !ans; ++i) {
        sum -= a[i - 1];
        sum += a[i + k];

        if (sum == m)
            ans = i + 1;
    }

    cout << ans << endl;

    return 0;
}
