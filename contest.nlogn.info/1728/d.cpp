#include <iostream>
#include <vector>
using namespace std;


const int N = 1000;
bool used[N] = {false};
vector <vector <int>> g(N);
vector <vector <int>> ans(N);
int cnt = 0;


void dfs(int x) {
    used[x] = true;
    for (int i : g[x]) {
        if (!used[i]) {
            ans[x].push_back(i);
            cnt++;
            dfs(i);
        }
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

    dfs(0);

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl << cnt << endl;

    for (int i = 0; i < n; i++) {
        if (ans[i].size()) {
            for (int j : ans[i])
                cout << i + 1 << ' ' << j + 1 << endl;
        }
    }

    return 0;
}