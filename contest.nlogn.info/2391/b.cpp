#include <iostream>
#include <vector>
#include <stack>
using namespace std;


const int N = 101;

bool used[N] = {0};
vector<vector<int>> g(N);
stack<int> ans;


void topological_sort(int x) {
    if (used[x]) return;

    used[x] = true;
    for (int i : g[x])
        topological_sort(i);

    ans.push(x);
}


int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;

        while (t != 0) {
            g[i].push_back(t);
            cin >> t;
        }
    }

    for (int i = 1; i <= n; ++i)
        topological_sort(i);

    while (ans.size()) {
        cout << ans.top() << ' ';
        ans.pop();
    }

    return 0;
}
