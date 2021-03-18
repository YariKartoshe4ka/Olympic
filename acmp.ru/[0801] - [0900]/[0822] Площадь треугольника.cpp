#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    double a, b, c, p;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    p = (a + b + c) / 2;

    printf("%.01lf", sqrt(p * (p - a) * (p - b) * (p - c)));

    return 0;
}