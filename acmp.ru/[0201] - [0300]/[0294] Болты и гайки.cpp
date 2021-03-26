#include <iostream>
using namespace std;

int main() {
    int k1, l1, m1, f1, k2, l2, m2, f2, m, s;
    cin >> k1 >> l1 >> m1 >> k2 >> l2 >> m2;

    f1 = k1 / 100 * l1;
    f2 = k2 / 100 * l2;

    k1 -= f1;
    k2 -= f2;

    m = min(k1, k2);
    k1 -= m;
    k2 -= m;

    s = k1 * m1 + k2 * m2;

    cout << f1 * m1 + f2 * m2 + s << endl;

    return 0;
}