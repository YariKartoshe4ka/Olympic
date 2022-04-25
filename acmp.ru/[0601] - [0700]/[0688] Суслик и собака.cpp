#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int xa, ya, xb, yb, n, x, y;
    float la, lb;

    cin >> xa >> ya >> xb >> yb >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x >> y;

        la = sqrt(pow(xa - x, 2) + pow(ya - y, 2));
        lb = sqrt(pow(xb - x, 2) + pow(yb - y, 2));

        if (la <= lb / 2) {
            cout << i;
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
