#include <iostream>
using namespace std;

int main() {
    char s;
    bool f = true;

    while (!cin.eof()) {
        cin >> s;

        if (s == '0')
            f = false;
    }

    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}