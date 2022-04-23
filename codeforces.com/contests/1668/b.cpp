#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n];

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a, a + n, greater<int>());

        bool f = false;
        long long x = 0;

        for (int i = 0; i < n - 1; ++i) {
            x += a[i] + 1;
            f = x > m;
            if (f) break;
        }
        x += a[0] + 1;

        if (x <= m)
            cout << "YES";
        else
            cout << "NO";

        cout << '\n';
    }

    return 0;
}