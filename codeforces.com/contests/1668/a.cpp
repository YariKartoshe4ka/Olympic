#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int s = n + m - 2, x = min(n, m), y = max(n, m);

        if (s < 2)
            cout << s << '\n';
        else if (s > 1 && (n == 1 || m == 1))
            cout << -1 << '\n';
        else
            cout << x * 2 - 2 + max((y - x - 1) * 2 + 1 + ((y - x - 1) % 2), 0) << '\n';
    }

    return 0;
}
