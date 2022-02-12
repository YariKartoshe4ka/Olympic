#include <iostream>
#include <cmath>
using namespace std;


#define M_PI           3.14159265358979323846


int main() {
    freopen("angle1.in", "r", stdin);
    freopen("angle1.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    double ans = atan2(y, x);

    if (ans < 0) ans += 2 * M_PI;
    
    printf("%.7lf", ans);

    return 0;
}