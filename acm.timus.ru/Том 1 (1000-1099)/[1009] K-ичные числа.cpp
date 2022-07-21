#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    --k;

    vector<int> dp(n + 1, 0);

    dp[0] = 1;
    dp[1] = k;

    for (int i = 2; i <= n; ++i)
        dp[i] = (dp[i - 1] + dp[i - 2]) * k;

    cout << dp[n] << endl;

    return 0;
}
