#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;


const int base = 31;


int main() {
    string a;
    cin >> a;

    int n = a.length();

    vector<ll> pows(n);
    pows[0] = 1;
    for (int i = 1; i < n; ++i)
        pows[i] = pows[i - 1] * base;


    vector<ll> h(n + 1);
    h[0] = 0;
    for (int i = 1; i <= n; ++i)
        h[i] = h[i - 1] + (a[i - 1] - 'a' + 1) * pows[i - 1];


    ll ans = 0;
    for (int l = 1; l <= n; ++l) {
        vector<ll> hl(n - l + 1);

        for (int i = 0; i <= n - l; ++i)
            hl[i] = (h[i + l] - h[i]) * pows[n - l - i];

        sort(hl.begin(), hl.end());
        hl.erase(unique(hl.begin(), hl.end()), hl.end());
        ans += hl.size();
    }

    cout << ans << endl;

    return 0;
}
