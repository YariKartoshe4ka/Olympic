#include <iostream>
#include <vector>
using namespace std;


const int N = 100000;
short colors[N];
vector <vector <int>> g(N);

bool dfs(int x, int prev_color) {
    colors[x] = (prev_color + 1) % 2;
    for (int i : g[x]) {
        if (colors[i] == colors[x])
            return false;
        if (colors[i] == -1) {
            if (!dfs(i, colors[x]))
                return false;
        }
    }
    return true;
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
        colors[i] = -1;

    for (int i = 0; i < n; i++)
        if (colors[i] == -1)
            if (!dfs(i, -1)) {
                cout << "No" << endl;
                return 0;
            }

    cout << "Yes" << endl;
    return 0;
}
