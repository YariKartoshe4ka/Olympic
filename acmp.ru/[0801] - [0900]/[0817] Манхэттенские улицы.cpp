#include <iostream>
using namespace std;

int main() {
    long long int n, m, d, k;
    cin >> n >> m >> d >> k;

    cout << (n + m) * d * k - n * m * d * d << endl;

    return 0;
}
