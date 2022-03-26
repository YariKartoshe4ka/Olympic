#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int l, r;
    cin >> l >> r;

    int ans = 0;

    for (int i = l; i <= r; ++i) {
        int cnt = 0;

        for (int j = 0; j < n; ++j)
            cnt += i % a[j] > 0;

        if (cnt == k) ++ans;
    }

    cout << ans << endl;

    return 0;
}