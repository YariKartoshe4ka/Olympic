#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    if (n <= 2)
        cout << n << endl;
    else
        cout << n * (n - 1) * (n - 2) << endl;

    return 0;
}
