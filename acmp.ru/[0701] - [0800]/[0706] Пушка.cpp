#include <iostream>
using namespace std;


int main() {
    double r, x, y;
    cin >> r >> x >> y;

    cout << r * abs(x) / (2 * r - y) << endl;
}
