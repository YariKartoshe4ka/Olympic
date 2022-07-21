#include <iostream>
#include <vector>
using namespace std;


const int INF = 1e9;


int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];


    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF));
    dp[0][1] = 0;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i - 1][j - 1];

    cout << dp[n][m] << endl;

    return 0;
}
