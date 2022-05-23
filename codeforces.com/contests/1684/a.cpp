#include <bits/stdc++.h>
using namespace std;


void solve() {
    string n;
    cin >> n;

    if (n.size() == 2)
        cout << n[1];
    else
        cout << *min_element(n.begin(), n.end());

    cout << '\n';
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
