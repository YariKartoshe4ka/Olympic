#include <iostream>
using namespace std;


int main() {
    freopen("intersec1.in", "r", stdin);
    freopen("intersec1.out", "w", stdout);

    long double a1, b1, c1, a2, b2, c2, x, y;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    bool fx = 0, fy = 0;
 
    if (a1 == 0) {
        y = -c1 / b1;
        fy = 1;
    }
    else if (b1 == 0) {
        x = -c1 / a1;
        fx = 1;
    }
 
    if (a2 == 0) {
        y = -c2 / b2;
        fy = 1;
    }
    else if (b2 == 0) {
        x = -c2 / a2;
        fx = 1;
    }
 
 
    if (fx && !fy)
        y = (-a1 * )
    else if (!fx && fy)
        x = (-b1 * y - c1) / a1;
    else if (!fx && !fy) {
        y = (a2 * c1 - c2 * a1) / (b2 * a1 - a2 * b1);
        x = (-b1 * y - c1) / a1;
    }

    printf("%.6Lf %.6Lf\n", x, y);

    return 0;
}