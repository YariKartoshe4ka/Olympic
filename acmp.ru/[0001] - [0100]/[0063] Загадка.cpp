#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b, c, d;
    cin >> b >> c;

    d = sqrt(b * b - 4 * c);

    cout << (b - d) / 2 << ' ' << (b + d) / 2 << endl;

    return 0;
}
