#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    int c[n];
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int ans = 0;

    for (int i = 0; i < 1 << n; ++i) {
        vector<int> a;

        for (int j = 0; j < n; ++j) 
            if (i & 1 << j)
                a.push_back(c[j]);

        if (a.size() == 1)
            continue;

        long long sum = 0;
        int imin = 1000001, imax = -1;

        for (int j : a) {
            sum += j;
            imin = min(imin, j);
            imax = max(imax, j);
        }

        if (sum >= l && sum <= r && imax - imin >= x)
            ++ans;
    }

    cout << ans << endl;

    return 0;
}