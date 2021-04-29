#include <iostream>
using namespace std;

int main() {
    int k, t;
    cin >> k;

    t = (k - 1) * 5;

    if (t < 725)
        cout << t / 60 << ' ' << t % 60 << endl;
    else
        cout << "NO" << endl;

    return 0;
}