#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n, xb, yb, l, xi, yi;
    cin >> n >> xb >> yb >> l;

    for (int i = 1; i <= n; i++) {
        cin >> xi >> yi;

        if (sqrt(pow(xi - xb, 2) + pow(yi - yb, 2)) <= l) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}