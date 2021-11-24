#include <iostream>
#include <vector>
using namespace std;


const int N = 100000;
bool used[N] = {false};
vector <vector <int>> g(N);

void dfs(int x) {
    used[x] = true;
    for (int i : g[x]) {
        if (!used[i])
            dfs(i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        u--;
        v--;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}