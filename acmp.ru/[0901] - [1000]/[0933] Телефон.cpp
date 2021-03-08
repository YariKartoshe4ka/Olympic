#include <iostream>
using namespace std;

int main() {
    int a, b, c, t;
    cin >> a >> b >> c >> t;

    cout << (t < a ? t * b : (t - a) * c + a * b) << endl;

    return 0;
}