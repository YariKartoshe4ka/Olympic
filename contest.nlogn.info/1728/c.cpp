#include <iostream>
#include <vector>
using namespace std;

const int N = 100;
bool used[N] = {false};
vector <vector <int>> g(N);
int E = 0;

bool dfs(int x, int prev) {
    used[x] = true;
    for (int i : g[x]) {
        if (i != prev)
            E++;

        if (!used[i])
            dfs(i, x);
    }
    return false;
}

int main() {
    int n, t;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cin >> t;
            if (t) {
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
        for (int j = i; j < n; j++)
            cin >> t;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            dfs(i, -1);
            cnt++;
        }
    }

    if (cnt == 1 && E == n - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}