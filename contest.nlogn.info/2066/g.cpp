#include <iostream>
#include <cmath>
using namespace std;


struct Vector {
    int x, y;
    double l;

    Vector(int xi, int yi) {
        x = xi;
        y = yi;
        l = sqrt(x * x + y * y);
    }
};


double angle(Vector v1, Vector v2) {
    return acos((v1.x * v2.x + v1.y * v2.y) / (v1.l * v2.l));
}


int main() {
    freopen("angle2.in", "r", stdin);
    freopen("angle2.out", "w", stdout);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    Vector v1 = {x1, y1}, v2 = {x2, y2};

    printf("%.15lf\n", angle(v1, v2));

    return 0;
}