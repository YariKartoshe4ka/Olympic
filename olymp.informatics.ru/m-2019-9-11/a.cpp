#include <iostream>
using namespace std;


int main() {
    int a, b, c, d, n, x;
    long int rez;

    cin >> a >> b >> c >> d >> n;
    n *= 7;

    x = n / (a + b);
    n -= x * (a + b);
    rez = x * (a * c + b * d);

    while (n > 0) {
        if (a > 0) {
            rez += c; a--;
        }
        else {
            rez += d; b--;
        }
        n--;
    }

    cout << rez << endl;

    return 0;
}