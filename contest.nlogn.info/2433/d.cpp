#include <iostream>
#include <set>
using namespace std;


const int N = 100, M = 100;

int parent[N + M], s[N + M];


int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}


void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a == b) return;

    if (s[a] < s[b])
        swap(a, b);

    parent[b] = a;
    s[a] += s[b];
}


int main() {
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < N + M; ++i) {
        parent[i] = i;
        s[i] = 1;
    }

    bool f = false;

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;

        f = f || k;

        for (int j = 0; j < k; ++j) {
            int a;
            cin >> a;
            union_sets(i, N + a - 1);
        }
    }

    set<int> l;

    for (int i = 0; i < n; ++i)
        l.insert(find_set(i));

    cout << l.size() - f << endl;

    return 0;
}
