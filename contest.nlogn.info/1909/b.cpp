#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


const int base = 31, mod = 1000000007;


int rmod(long long x) {
    return (x % (long long)mod + mod) % mod;
}


int binpow(long long x, int n) {
    int r = 1;
    x = rmod(x);
    while (n) {
        if (n & 1) r = rmod(r * x);
        x = rmod(x * x);
        n >>= 1;
    }
    return r;
}


int main() {
    string a;
    cin >> a;

    int n = a.length();

    vector<int> f(n + 1);
    for (int i = 1; i <= n; ++i)
        f[i] = rmod((long long)f[i - 1] * base + a[i - 1] - 'a' + 1);

    long long ans = 0;
    for (int l = 1; l <= n; ++l) {
        vector<int> fl(n - l + 1);

        for (int i = 0; i <= n - l; ++i) {
            fl[i] = rmod((f[l + i] - f[i]) * (long long)binpow(base, n - i - 1));
        }

        sort(fl.begin(), fl.end());
        fl.erase(unique(fl.begin(), fl.end()), fl.end());
        ans += fl.size();
    }

    cout << ans << endl;

    return 0;
}
