#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    printf("%.5f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return 0;
}
