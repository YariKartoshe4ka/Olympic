#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int s, a, b, c, d;
    cin >> s;

    a = 1;
    b = 1;
    c = -2 * s;

    d = pow(b, 2) - 4 * a * c;

    cout << (-b + sqrt(d)) / (2 * a) << endl;

    return 0;
}