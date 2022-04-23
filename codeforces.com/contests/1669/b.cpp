#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a, a + n);

        int prev = 0, cnt = 0;

        for (int i : a) {
            if (i == prev)
                ++cnt;
            else
                cnt = 0;

            prev = i;

            if (cnt == 2) {
                cout << prev << '\n';
                break;
            }
        }

        if (cnt != 2)
            cout << -1 << '\n';
    }
    return 0;
}