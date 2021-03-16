#include <iostream>
using namespace std;

int main() {
    bool a = 1, b = 0, c = 0;
    char s;

    cin >> s;
    while (!cin.eof()) {
        if (s == 'A') 
            swap(a, b);
        if (s == 'B')
            swap(b, c);
        else
            swap(a, c);

        cin >> s;
    }

    cout << (a ? 1 : (b ? 2 : 3)) << endl;

    return 0;
}