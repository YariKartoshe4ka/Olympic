#include <iostream>
#include <vector>
using namespace std;


const int N = 150000;

int parent[N];
vector<vector<int>> s(N);


int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}


void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a == b) return;

    if (s[a].size() < s[b].size())
        swap(a, b);

    parent[b] = a;
    s[a].insert(s[a].end(), s[b].begin(), s[b].end());
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < N; ++i) {
        parent[i] = i;
        s[i].push_back(i);
    }

    for (int i = 1; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        union_sets(a - 1, b - 1);
    }
    
    for (int i : s[find_set(0)])
        cout << i + 1 << ' ';

    return 0;
}