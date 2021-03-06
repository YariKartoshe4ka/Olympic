#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2 << endl;
    else
        if (n == 1)
            cout << 0 << endl;
        else
            cout << n << endl;

    return 0;
}