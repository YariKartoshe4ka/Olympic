#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, r1, x2, y2, r2;
    float k;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    k = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << (k <= r1 + r2 && k >= abs(r1 - r2) ? "YES" : "NO") << endl;

    return 0;
}
