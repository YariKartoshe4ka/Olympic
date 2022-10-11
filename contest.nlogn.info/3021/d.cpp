#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int n = s.size();

    vector<int> p(n + 1);
    for (int i = 2; i <= n; ++i)
        p[i] = p[i - 1] + (s[i - 2] == s[i - 1]);

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << p[r] - p[l - 1] - (s[l - 2] == s[l - 1]) << '\n';
    }
    return 0;
}
