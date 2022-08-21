#include <bits/stdc++.h>

using namespace std;


const int INF = 1e9;
const double D = sqrt(2);


int main() {
    int n, m, k;
    cin >> n >> m >> k;

    set<pair<int, int>> a;
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        a.insert({x, y});
    }

    vector<vector<double>> dp(m + 2, vector<double>(n + 2, INF));
    dp[m + 1][1] = -1;

    for (int i = m; i >= 0; --i) {
        for (int j = 1; j <= n + 1; ++j) {
            dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;

            if (a.count({j - 1, m - i}))
                dp[i][j] = min(dp[i][j], dp[i + 1][j - 1] + D);
        }
    }

    cout << round(dp[0][n + 1] * 100) << endl;


    return 0;
}
