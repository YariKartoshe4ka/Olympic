#include <iostream>
using namespace std;

int main() {
    int n, m, f, l;
    cin >> n >> m >> f >> l;

    cout << m + f + l - n << ' ' << n - l - f << ' ' << n - l - m << endl;

    return 0;
}
