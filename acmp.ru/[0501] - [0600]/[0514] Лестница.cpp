// S=(a1+an)/2*n => K=(1+x)/2*x => 2K=(1+x)*x => x^2+x-2K=0 (Квадратное уравнение)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, k;
    float d;

    cin >> k;

    a = 1;
    b = 1;
    c = -2 * k;

    d = sqrt(b * b - 4 * a * c);

    cout << trunc((-b + d) / (2 * a)) << endl;

    return 0;
}