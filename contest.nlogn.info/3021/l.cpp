#include <bits/stdc++.h>
using namespace std;


int main() {
    int k, n;
    cin >> k >> n;

    vector<int> a(n), ans(n);
    vector<pair<int, int>> b(n);
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 1; i <= k; ++i)
        q.push(i);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        int t;
        cin >> t;
        b[i] = {t, i};
    }

    sort(b.begin(), b.end());

    int j = 0;

    for (int i = 0; i < n; ++i) {
        while (j < n && b[j].first < a[i]) {
            q.push(ans[b[j].second]);
            ++j;
        }

        if (q.size() == 0) {
            cout << "0 " << i + 1 << endl;
            return 0;
        }

        ans[i] = q.top();
        q.pop();
    }

    for (auto i : ans)
        cout << i << endl;

    return 0;
}
