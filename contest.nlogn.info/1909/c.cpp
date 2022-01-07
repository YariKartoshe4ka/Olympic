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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m;
    string a;
    cin >> a >> m;

    int n = a.length();

    vector<int> f(n + 1);
    for (int i = 1; i <= n; ++i)
        f[i] = rmod((long long)f[i - 1] * base + a[i - 1] - 'a' + 1);

    for (int i = 0; i < m; ++i) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        int h1 = rmod((long long)(f[r1 + 1] - f[l1]) * binpow(base, l2));
        int h2 = rmod(f[r2 + 1] - f[l2]);
        
        if (h1 == h2)
            cout << '=' << endl;
        else if (h1 > h2)
            cout << '>' << endl;
        else
            cout << '<' << endl;
    }

    return 0;
}
