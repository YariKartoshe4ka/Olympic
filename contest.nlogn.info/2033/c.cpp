#include <iostream>
#include <cmath>
using namespace std;


int main() {
    short n, x, y;
    double r = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        r = max(r, sqrt(x * x + y * y));
    }

    printf("0 0 %.9f", r);

    return 0;
}
