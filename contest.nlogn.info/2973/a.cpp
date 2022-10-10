#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int ans = -1;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        ans = max(ans, t);
    }

    cout << ans << endl;
    return 0;
}
