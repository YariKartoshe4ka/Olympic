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


double distance(int x, int y, int x1, int y1, int x2, int y2) {
    Vector v = {x1, y1, x2, y2}, p = {x1, y1, x, y};
    double cos = (v * p) / (v.length() * p.length());

    if (cos > 0) {
        Vector v = {x2, y2, x1, y1}, p = {x2, y2, x, y};
        double cos = (v * p) / (v.length() * p.length());

        if (cos > 0) {
            Line l = {x1, y1, x2, y2};
            return l.length(x, y);
        }
        return p.length();
    }
    return p.length();
}


template<typename T>
T min4(T a, T b, T c, T d) {
    return min(a, min(b, min(c, d)));
}


int main() {
    freopen("distance5.in", "r", stdin);
    freopen("distance5.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    printf("%.10lf\n", min4(
        distance(x3, y3, x1, y1, x2, y2),
        distance(x4, y4, x1, y1, x2, y2),
        distance(x1, y1, x3, y3, x4, y4),
        distance(x2, y2, x3, y3, x4, y4)
    ));

    return 0;
}