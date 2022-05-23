#include <bits/stdc++.h>
using namespace std;


void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a + b + c, y = b + c, z = c;

    printf("%d %d %d\n", x, y, z);
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
