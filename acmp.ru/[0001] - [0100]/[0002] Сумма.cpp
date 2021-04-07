#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 1)
        cout << long((n + 1) / 2. * n);
    else
        cout << long((n + 1) / 2. * abs(n - 2));

    return 0;
}