#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin >> n;

    long long int x = 0;

    for (int i = 1; i <= floor(n / (float)2); ++i)
        x += n / i * i;

    int c = floor(n / (float)2) + 1;
    x += (c + n) / (float)2 * (n - c + 1);

    cout << x << endl;

    return 0;
}
