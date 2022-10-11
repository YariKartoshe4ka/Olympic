#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int i = 0, j = 0, ibest = 0, jbest = 0;

    while (i < n && j < m) {
        if (abs(a[i] - b[j]) < abs(a[ibest] - b[jbest])) {
            ibest = i;
            jbest = j;
        }

        if (a[i] < b[j]) ++i;
        else ++j;
    }

    cout << a[ibest] << ' ' << b[jbest] << endl;

    return 0;
}
