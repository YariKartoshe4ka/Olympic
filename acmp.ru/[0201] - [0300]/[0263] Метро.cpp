#include <iostream>
using namespace std;

int main() {
    int n, i, j, k;
    cin >> n >> i >> j;

    k = max(i, j) - min(i, j) - 1;

    cout << min(k, n - k - 2) << endl;

    return 0;
}