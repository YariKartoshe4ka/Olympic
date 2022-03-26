#include <iostream>
#include <vector>

using namespace std;
using ll = long long;


const int N = 100001;
int a[N] = {0};
ll dp[N];


int main() {
    int n, t;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> t;
        ++a[t];
    }

    dp[0] = 0;
    dp[1] = a[1];

    for (ll i = 2; i < N; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + i * a[i]);
    
    cout << dp[N - 1] << endl;

    return 0;
}