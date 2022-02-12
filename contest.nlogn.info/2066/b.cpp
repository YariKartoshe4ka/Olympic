#include <iostream>
using namespace std;


int main() {
    freopen("line1.in", "r", stdin);
    freopen("line1.out", "w", stdout);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int a, b, c;

    a = y2 - y1;
    b = x1 - x2;
    c = -a * x1 - b * y1;

    printf("%d %d %d\n", a, b, c);

    return 0;
}