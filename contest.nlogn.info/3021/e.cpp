#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ibest = 0, jbest = k + 1, imax = 0;
    for (int j = k + 2; j < n; ++j) {
        if (a[j - k - 1] > a[imax])
            imax = j - k - 1;

        if (a[j] + a[imax] > a[jbest] + a[ibest]) {
            ibest = imax;
            jbest = j;
        }
    }

    cout << ibest + 1 << ' ' << jbest + 1 << endl;
    return 0;
}
