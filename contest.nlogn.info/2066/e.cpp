#include <iostream>
#include <cmath>
using namespace std;


int main() {
    freopen("length.in", "r", stdin);
    freopen("length.out", "w", stdout);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double ans = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.6lf", ans);

    return 0;
}