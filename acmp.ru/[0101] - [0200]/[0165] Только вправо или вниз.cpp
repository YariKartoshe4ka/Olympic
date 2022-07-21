#include <iostream>
#include <vector>

using namespace std;
using ll = long long;


int main() {
    int n, m;
    cin >> n >> m;

    ll a[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    a[n - 1][m - 1] = 1;

    vector<vector<ll>> dp(n, vector<ll>(m, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i + a[i][j] < n) dp[i + a[i][j]][j] += dp[i][j];
            if (j + a[i][j] < m) dp[i][j + a[i][j]] += dp[i][j];
        }
    }

    cout << dp[n - 1][m - 1] << endl;

    return 0;
}
