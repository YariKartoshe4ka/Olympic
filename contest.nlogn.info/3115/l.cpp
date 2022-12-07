#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main() {
    ll n;
    cin >> n;

    int cnt = 0;

    for (int i = 2; i <= 1e7; ++i) {
        while (n % i == 0) {
            n /= i;
            ++cnt;
        }
    }
    if (n > 1) ++cnt;

    cout << (cnt == 20 ? "Yes" : "No") << endl;

    return 0;
}
