#include <iostream>
using namespace std;

int main() {
    char n;
    int r = 0;

    while (cin >> n) {

        if (n == '6' || n == '9' || n == '0')
            r++;

        else if (n == '8')
            r += 2;
    }

    cout << r << endl;

    return 0;
}
