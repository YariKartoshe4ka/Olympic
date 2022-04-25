#include <iostream>
#include <cmath>
using namespace std;

int main() {
    short n;
    cin >> n;

    double l = 0;
    short x = 0, y = 0, xi, yi;

    for (short i = 0; i < n; i++) {
        cin >> xi >> yi;

        l += sqrt(pow(x - xi, 2) + pow(y - yi, 2));
        x = xi, y = yi;
    }

    l += sqrt(xi*xi + yi*yi);

    printf("%0.3f\n", l);

    return 0;
}
