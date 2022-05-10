#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (max(x - a, 0) + max(y - b, 0) - c <= 0)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    return 0;
}
