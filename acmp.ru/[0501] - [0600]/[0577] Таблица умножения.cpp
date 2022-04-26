#include <iostream>
using namespace std;


int ans[10] = {0};


int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int x = i * j;
            while (x) {
                ++ans[x % 10];
                x /= 10;
            }
        }
    }

    for (int i : ans)
        cout << i << '\n';

    return 0;
}
