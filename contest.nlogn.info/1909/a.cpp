#include <iostream>
#include <cstring>
#include <vector>
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
    string a, b;
    cin >> a >> b;

    int n = a.length(), m = b.length();

    vector<int> f(n + 1);
    for (int i = 1; i <= n; ++i)
        f[i] = rmod((long long)f[i - 1] * base + a[i - 1] - 'a' + 1);

    int h = 0;
    for (int i = 0; i < m; ++i)
        h = rmod(h + ((long long)b[i] - 'a' + 1) * (long long)binpow(base, m - i - 1));

    vector<int> ans;
    for (int i = 0; i <= n - m; ++i) {
        int x = rmod((long long)f[i + m] - (long long)f[i] * binpow(base, m));
        if (x == h)
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i)
        cout << ans[i] << ' ';

    return 0;
}