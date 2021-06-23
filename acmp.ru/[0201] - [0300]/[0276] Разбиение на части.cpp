#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, base, base_amount;
    cin >> n >> m;

    base = n / m;
    base_amount = m - round(m * ((float)n / m - n / m));

    for (int i = 0; i < base_amount; i++)
        cout << base << ' ';

    for (int i = 0; i < m - base_amount; i++)
        cout << base + 1 << ' ';

    return 0;
}