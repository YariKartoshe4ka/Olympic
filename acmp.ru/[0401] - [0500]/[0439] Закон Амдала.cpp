#include <iostream>
using namespace std;

int main() {
    int n;
    double p;

    cin >> n >> p;
    p /= 100;

    cout << fixed;
    cout.precision(9);
    cout << (1 / (p + (1 - p) / n)) << endl;

    return 0;
}
