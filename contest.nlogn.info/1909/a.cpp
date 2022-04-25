#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
using ll = long long;

const int base = 31;


int main() {
    string a, b;
    cin >> a >> b;

    int n = a.length(), m = b.length();


    vector<ll> pows(n);
    pows[0] = 1;
    for (int i = 1; i < n; ++i)
        pows[i] = pows[i - 1] * base;


    vector<ll> h(n + 1);
    h[0] = 0;
    for (int i = 1; i <= n; ++i)
        h[i] = h[i - 1] + (a[i - 1] - 'a' + 1) * pows[i - 1];

    ll hash = 0;
    for (int i = 0; i < m; ++i)
        hash = hash + (b[i] - 'a' + 1) * pows[i];


    vector<int> ans;
    for (int i = 0; i <= n - m; ++i) {
        ll shash = h[i + m] - h[i];

        if (shash == hash * pows[i])
            ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (int i : ans) cout << i << ' ';

    return 0;
}
