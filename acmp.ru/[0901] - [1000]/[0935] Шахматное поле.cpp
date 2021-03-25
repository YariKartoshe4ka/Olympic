#include <iostream>
using namespace std;

int main() {
    short int s = 0, t;

    while(cin >> t)
        s += t;

    cout << (s % 2 ? "NO" : "YES") << endl;

    return 0;
}