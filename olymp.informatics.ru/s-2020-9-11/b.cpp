#include <iostream>
#include <cmath>
using namespace std;


int main() {
    float a;
    int gcd, lcm;

    cin >> gcd >> lcm;

    a = (float)lcm / gcd;

    if (trunc(a) != a)
        cout << -1 << endl;
    else
        cout << gcd << ' ' << lcm << endl;

    return 0;
}
