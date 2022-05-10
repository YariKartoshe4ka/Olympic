#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;

    int st = 0, sp = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (c == '1') {
            st = i;
            sp = st;
        }
        else if (c == '0') {
            sp = i;
            break;
        }
        else {
            sp = i;
        }
    }

    cout << sp - st + 1 << '\n';
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
