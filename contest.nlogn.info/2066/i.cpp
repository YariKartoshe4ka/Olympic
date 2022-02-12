#include <iostream>
#include <cmath>
using namespace std;


struct Line {
    int a, b, c;

    Line(int x1, int y1, int x2, int y2) {
        a = y2 - y1;
        b = x1 - x2;
        c = -a * x1 - b * y1;
    }
};


int main() {
    freopen("bisector.in", "r", stdin);
    freopen("bisector.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    Line l1 = {x1, y1, x2, y2}, l2 = {x1, y1, x3, y3};

    double p, q, a, b, c;

    p = sqrt(l1.a * l1.a + l1.b * l1.b);
    q = sqrt(l2.a * l2.a + l2.b * l2.b);

    a = q * l1.a + p * l2.a;
    b = q * l1.b + p * l2.b;
    c = q * l1.c + p * l2.c;

    printf("%.6lf %.6lf %.6lf\n", a, b, c);

    return 0;
}