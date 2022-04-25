#include <iostream>
#include <vector>
#include <queue>
using namespace std;


const int k = 10;


int main() {
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    s--;
    f--;

    vector<vector<pair<int, int>>> g(n);
    vector<queue<int>> queues(k + 1);
    vector<int> d(n, -1);

    int u, v, w;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        g[u - 1].push_back({v - 1, w});
    }
    queues[0].push(s);

    int empty_queues = 0;
    for (int i = 0; empty_queues < k + 1; i++) {
        int x = i % (k + 1);

        if (queues[x].empty()) {
            empty_queues++;
            continue;
        }
        else
            empty_queues = 0;

        while (!queues[x].empty()) {
            u = queues[x].front();
            queues[x].pop();

            if (d[u] != -1)
                continue;

            d[u] = i;
            for (int j = 0; j < g[u].size(); j++) {
                v = g[u][j].first;
                w = g[u][j].second;

                if (d[v] != -1)
                    continue;
                queues[(x + w) % (k + 1)].push(v);
            }
        }
    }

    cout << d[f] << endl;

    return 0;
}
