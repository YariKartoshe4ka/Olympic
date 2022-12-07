#include <bits/stdc++.h>
using namespace std;


const int N = 1e9, MAX_S = 81;


int main() {
    int s;
    cin >> s;

    vector<vector<int>> dp(10, vector<int> (MAX_S + 1, 0));

    for (int i = 0; i <= 9; ++i)
        dp[0][i] = dp[i][i] = 1;


    for (int k = 2; k <= 9; ++k) {
        for (int j = 1; j <= MAX_S; ++j) {
            for (int i = 1; i <= 9 && i <= j; ++i)
                dp[i][j] += dp[0][j - i];
        }

        for (int j = 1; j <= MAX_S; ++j) {
            dp[0][j] = 0;

            for (int i = 1; i <= 9; ++i)
                dp[0][j] += dp[i][j];
        }
    }

    ++dp[0][1];

    cout << dp[0][s] << endl;
    return 0;
}
