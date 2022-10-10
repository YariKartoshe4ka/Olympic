#include <bits/stdc++.h>
using namespace std;


vector<int> a;


void query() {
    int n = a.size(), q;
    cin >> q;

    int l = -1, r = n, mid;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (a[mid] < q)
            l = mid;
        else
            r = mid;
    }
    cout << r << ' ';
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;

    a.assign(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    cin >> m;
    while (m--) {
        query();
    }

    return 0;
}
