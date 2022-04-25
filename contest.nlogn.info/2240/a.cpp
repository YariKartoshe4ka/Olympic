#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int dp[n] = {0}, ans = -1;

    for (int i = 0; i < n; ++i) {
        int m = -1;

        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i] && dp[j] > m)
                m = dp[j];
        }
        dp[i] = m + 1;
        ans = max(ans, dp[i]);
    }

    cout << ans + 1 << endl;

    return 0;
}
