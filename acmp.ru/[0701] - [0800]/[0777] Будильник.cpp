#include <iostream>
using namespace std;

int main() {
    short int s, t;
    cin >> s >> t;

    cout << (t + 12 - s) % 12 << endl;

    return 0;
}
