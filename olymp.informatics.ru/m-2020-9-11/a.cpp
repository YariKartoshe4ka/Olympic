#include <iostream>
using namespace std;


int main() {
    int n, k, x, y, r;
    cin >> n >> k >> x >> y;
    r = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0)
            r += y;
        else
            r += x;
    }

    cout << r << endl;

    return 0;
}
