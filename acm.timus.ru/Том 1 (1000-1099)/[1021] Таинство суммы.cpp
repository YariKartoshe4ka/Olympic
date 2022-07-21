#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] + b[j] > 10000)
            ++i;
        else if (a[i] + b[j] < 10000)
            ++j;

        else {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
