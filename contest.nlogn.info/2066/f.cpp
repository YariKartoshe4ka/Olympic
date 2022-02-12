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

    double length(int x, int y) {
        return abs(a * x + b * y + c) / sqrt(a * a + b * b);
    }
};


int main() {
    freopen("distance2.in", "r", stdin);
    freopen("distance2.out", "w", stdout);

    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    Line l = {x1, y1, x2, y2};
    printf("%.5lf\n", l.length(x, y));

    return 0;
}