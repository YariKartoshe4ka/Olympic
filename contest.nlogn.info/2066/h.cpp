#include <iostream>
#include <cmath>
using namespace std;


long double length(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main() {
    freopen("area1.in", "r", stdin);
    freopen("area1.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    long double a, b, c, p;

    a = length(x1, y1, x2, y2);
    b = length(x2, y2, x3, y3);
    c = length(x3, y3, x1, y1);

    p = (a + b + c) / 2;

    printf("%.15Lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
