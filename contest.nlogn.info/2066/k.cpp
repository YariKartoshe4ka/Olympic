#include <iostream>
#include <cmath>
using namespace std;


struct Vector {
    int x, y;

    Vector(int x1, int y1, int x2, int y2) {
        x = x2 - x1;
        y = y2 - y1;
    }

    double length() {
        return sqrt(x * x + y * y);
    }

    double operator* (Vector v) {
        return x * v.x + y * v.y;
    }
};

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
    freopen("distance4.in", "r", stdin);
    freopen("distance4.out", "w", stdout);

    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    Vector v = {x1, y1, x2, y2}, p = {x1, y1, x, y};
    double cos = (v * p) / (v.length() * p.length());

    if (cos > 0) {
        Vector v = {x2, y2, x1, y1}, p = {x2, y2, x, y};
        cos = (v * p) / (v.length() * p.length());

        if (cos > 0) {
            Line l = {x1, y1, x2, y2};
            printf("%.6lf\n", l.length(x, y));
        } else
            printf("%.6lf\n", p.length());
    } else
        printf("%.6lf\n", p.length());

    return 0;
}