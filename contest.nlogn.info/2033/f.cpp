#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool cmp(pair<int, int> l, pair<int, int> r) {
    return l.first > r.first;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long W;
        cin >> n >> W;

        vector<pair<int, int>> w(n);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            w[i] = {x, i + 1};
        }

        sort(w.begin(), w.end(), cmp);

        vector<int> ans;
        long long cur_W = 0;

        for (int i = 0; i < n; ++i) {
            if (cur_W + w[i].first <= W) {
                cur_W += w[i].first;
                ans.push_back(w[i].second);
            }
        }

        if (ans.size() == 0 || cur_W < (W / 2 + W % 2))
            printf("-1\n");
        else {
            cout << ans.size() << '\n';
            for (int i : ans) cout << i << ' ';
            cout << '\n';
        }
    }

    return 0;
}
