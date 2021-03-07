#include <iostream>
using namespace std;


int main() {
    int w, h, r;
    cin >> w >> h >> r;

    if (w >= r * 2 && h >= r * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}