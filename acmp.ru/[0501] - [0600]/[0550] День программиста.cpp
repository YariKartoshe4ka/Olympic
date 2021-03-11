#include <iostream>
using namespace std;

int main() {
    int n;
    short int d;

    cin >> n;

    d = 13 - bool(n % 4 == 0 && n % 100 != 0 || n % 400 == 0);

    printf("%d/09/%04d", d, n);

    return 0;
}