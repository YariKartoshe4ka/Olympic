#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, k, t;
    cin >> n >> k;

    vector<pair<int, int>> d(n);

    for (int i = 0; i < n; ++i) {
        cin >> t;
        d[i] = {t, i};
    }

    sort(d.begin(), d.end());

    int i = 0, j = 0, l = 0, istart = 0;

    while (j < n - 1) {
        if (d[j].first - d[i].first > k)
            ++i;
        else
            ++j;

        if (d[j].first - d[i].first <= k && j - i + 1 > l) {
            l = j - i + 1;
            istart = i;
        }
    }

    cout << l << endl;
    for (int i = istart; i < l + istart; ++i)
        cout << d[i].second + 1 << ' ';

    return 0;
}
