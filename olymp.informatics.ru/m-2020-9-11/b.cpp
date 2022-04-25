#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n, x;
    long long int r;
    cin >> n >> x;
    r = 1;

    for (int i = n-x+2; i <= n; i++)
        r += pow(2, i - 1);

    cout << r << endl;

    return 0;
}
