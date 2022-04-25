#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    long long dp[n + 1][n + 1] = {{0}};
    dp[1][1] = 1;

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            long long s = 0;

            for (int k = 0; k < j; ++k)
                s += dp[i - j][k];

            dp[i][j] = s;
        }

        dp[i][i] = 1;
    }

    long long q = 0;
    for (int i = 0; i < n; ++i)
        q += dp[n][i];

    cout << q << endl;

    return 0;
}
