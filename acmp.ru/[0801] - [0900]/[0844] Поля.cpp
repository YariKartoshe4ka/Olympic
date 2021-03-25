#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int a, b;
    double c;

    cin >> a >> b;
    c = sqrt(a * b);

    cout << (c == int(c) ? int(c) : 0) << endl;

    return 0;
}