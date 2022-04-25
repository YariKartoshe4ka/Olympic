#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (b > a)
            swap(a, b);
        a %= b;
    }
    return a + b;
}


int main() {
    int x, y;
    cin >> x >> y;

    int p = 7 - max(x, y), d = gcd(p, 6);

    printf("%d/%d\n", p / d, 6 / d);

    return 0;
}
