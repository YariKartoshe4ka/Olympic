#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    cout << 3 * (1ll << (n - 1)) << endl;

    return 0;
}
