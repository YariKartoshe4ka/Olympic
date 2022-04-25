#include <iostream>
using namespace std;


const int N = 150000;

int parent[N];
long long sz[N], ed[N];


int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}


void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a == b)
        ++ed[a];
    else {
        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];
        ed[a] += ed[b] + 1;
    }
}


int main() {
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < n; ++i) {
        parent[i] = i;
        sz[i] = 1;
        ed[i] = 0;
    }

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;

        union_sets(a - 1, b - 1);
    }

    for (int i = 0; i < n; ++i) {
        int a = find_set(i);

        if (ed[a] != sz[a] * (sz[a] - 1) / 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
