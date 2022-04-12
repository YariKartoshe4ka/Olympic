#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;


const int N = 100;

int parent[N], s[N];


int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}


bool union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a != b) {
        if (s[a] < s[b])
            swap(a, b);

        parent[b] = a;
        s[a] += s[b];
        return true;
    }
    return false;
}


bool comp(tuple<int, int, int> a, tuple<int, int, int> b) {
    return get<2>(a) < get<2>(b);
}


int main() {
    int n, m;
    cin >> n >> m;

    vector<tuple<int, int, int>> g(m);

    for (int i = 0; i < n; ++i) {
        parent[i] = i;
        s[i] = 1;
    }

    for (int i = 0; i < m; ++i) {
        int v, u, c;
        cin >> v >> u >> c;

        g[i] = {v, u, c};
    }

    sort(g.begin(), g.end(), comp);

    long long cnt = 0;

    for (int i = 0; i < m; ++i) {
        auto [v, u, c] = g[i];

        cnt += c * union_sets(v, u);
    }

    cout << cnt << endl;

    return 0;
}