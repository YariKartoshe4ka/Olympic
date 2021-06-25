#include <iostream>
using namespace std;

int main() {
    short int n;
    cin >> n;

    if (n > 8)
        cout << n - 8 << ' ';

    if (n % 8 != 1)
        cout << n - 1 << ' ';

    if (n % 8 != 0)
        cout << n + 1 << ' ';

    if (n < 57)
        cout << n + 8 << ' ';

    return 0;
}