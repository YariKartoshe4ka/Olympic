#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <algorithm>
using namespace std;


const int N = 1e5;

int parent[N], s[N];


int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}


bool union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a == b)
        return false;

    if (s[a] < s[b])
        swap(a, b);

    parent[b] = a;
    s[a] += s[b];

    return true;
}


int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        parent[i] = i;
        s[i] = 1;
    }

    vector<pair<int, int>> g(m);

    for (int i = 0; i < m; ++i) {
        int v, u;
        cin >> v >> u;
        g[i] = {v, u};
    }

    int q;
    cin >> q;

    vector<int> vdel(q);

    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        vdel[i] = t - 1;
    }

    reverse(vdel.begin(), vdel.end());
    set<int> del(vdel.begin(), vdel.end());

    int cnt = n;

    for (int i = 0; i < m; ++i) {
        if (!del.count(i)) {
            auto [v, u] = g[i];
            if (union_sets(v, u))
                --cnt;
        }
    }

    stack<int> ans;

    for (int i : vdel) {
        ans.push(cnt);
        auto [v, u] = g[i];
        if (union_sets(v, u))
            --cnt;
    }

    while (ans.size()) {
        cout << ans.top() << ' ';
        ans.pop();
    }

    return 0;
}
