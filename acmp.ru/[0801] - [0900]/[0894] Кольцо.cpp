#include <iostream>
#include <cmath>
using namespace std;

#define M_PI 3.1415926535897932384626433832795

int main() {
    double s, r1;
    cin >> s >> r1;

    printf("%.03f\n", sqrt((r1 * r1 * M_PI - s) / M_PI));

    return 0;
}