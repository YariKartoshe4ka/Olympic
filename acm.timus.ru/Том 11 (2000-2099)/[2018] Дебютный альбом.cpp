#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
#define mod(x) (((x) % MOD + MOD) % MOD)


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n >> a >> b;

    vector<ll> dp_a(a + n, 0),
               dp_b(b + n, 0);

    dp_a[a] = dp_b[b] = 1;

    ll sum_a = 0, sum_b = 0;

    for (int i = 1; i < n; ++i) {
        sum_a = mod(sum_a + dp_b[b + i - 1] - dp_b[i - 1]);
        dp_a[a + i] = sum_a;

        sum_b = mod(sum_b + dp_a[a + i - 1] - dp_a[i - 1]);
        dp_b[b + i] = sum_b;
    }

    ll ans = 0;
    for (int i = 0; i < a; ++i) ans = mod(ans + dp_a[a + n - 1 - i]);
    for (int i = 0; i < b; ++i) ans = mod(ans + dp_b[b + n - 1 - i]);

    cout << ans << endl;
}
