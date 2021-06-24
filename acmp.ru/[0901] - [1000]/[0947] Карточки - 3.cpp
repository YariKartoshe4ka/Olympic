#include <iostream>
using namespace std;


int main() {
    int cnt = 0;
    double x, l = 0;
    cin >> x;

    while (l < x) {
        cnt++;
        l += 1 / double(cnt + 1);
    }

    cout << cnt << " card(s)" << endl;

    return 0;
}