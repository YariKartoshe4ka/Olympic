#include <iostream>
using namespace std;


int main() {
    long long n;
    cin >> n;

    cout << n / 6 + bool(n % 6) * (7 - n % 6) << ' ' << n * 6 << endl;

    return 0;
}
