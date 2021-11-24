#include <iostream>
#include <vector>
using namespace std;


const int N = 100000;

bool used[N] = {false};
vector <vector <int>> g(N);
vector <int> ans;

bool dfs(int x, int prev) {
    used[x] = true;
    for (int i : g[x]) {
        if (!used[i]) {
            if (dfs(i, x)) {
                ans.push_back(x);
                return true;
            }
        }
        else if (i != prev) {
            ans.push_back(x);
            return true;
        }
    }
    return false;
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

    for (int i = 0; i < n; i++)
        if (!used[i])
            if (dfs(i, -1)) {
                cout << "Yes" << endl << ans.size() << endl;
                for (int i = 0; i < ans.size(); i++)
                    cout << ans[i] + 1 << ' ';
                return 0;
            }

    cout << "No" << endl;
    return 0;
}