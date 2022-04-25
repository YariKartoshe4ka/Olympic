#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch (n % 5) {
        case 0:
            cout << n / 5 << ' ' << 0 << endl;
            break;
        case 1:
            cout << (n - 6) / 5 << ' ' << 2 << endl;
            break;
        case 2:
            cout << 0 << ' ' << n / 3 << endl;
            break;
        case 3:
            cout << (n - 3) / 5 << ' ' << 1 << endl;
            break;
        case 4:
            cout << (n - 9) / 5 << ' ' << 3 << endl;
            break;
    }

    return 0;
}
