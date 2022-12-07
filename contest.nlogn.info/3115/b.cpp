#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    string ans;

    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            ans += to_string(i) + "*";
            n /= i;
        }
    }

    if (n > 1) ans += to_string(n) + "*";
    ans.pop_back();

    cout << ans << endl;

    return 0;
}
