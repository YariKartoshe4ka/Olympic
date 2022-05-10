#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;

        int n = s.length(), m = t.length();

        if (t.find('a') < m) {
            if (m == 1)
                cout << 1;
            else
                cout << -1;
        }
        else
            cout << (1ll << n);

        cout << '\n';
    }

    return 0;
}
