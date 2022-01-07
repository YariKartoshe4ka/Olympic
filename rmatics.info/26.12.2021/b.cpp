#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x;
    cin >> n >> m;

    vector<pair<int, int>> t;
    int prev[m + 1] = {0}, p = 1;
    prev[0] = 8000001;


    for (int i = 0; i < n; ++i) {
        cin >> x;

        int tmp = p;
        while (x > prev[tmp]) {
            --tmp;
        }

        ++tmp;
        prev[tmp] = x;
        t.push_back({x, tmp});
        cout << tmp << ' ';
        p = max(tmp, p);
    }

    sort(t.begin(), t.end());

    cout << endl;
    for (auto x : t) {
        cout << x.second << ' ';
    }

    return 0;
}