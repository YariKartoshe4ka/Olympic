#include <iostream>
#include <vector>

using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;

    vector<vector<ll>> dp(11, vector<ll>(n + 1, 0));
    for (int j = 0; j <= n; ++j) dp[0][j] = 1;
    for (int i = 1; i < 11; ++i) dp[i][0] = 1;


    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j <= n; ++j) {
            int tmp = j;
            while (tmp >= 0) {
                dp[i][j] += dp[i - 1][tmp];
                tmp -= 1 << i;
            }
        }
    }

    cout << dp[10][n] << endl;


    return 0;
}
