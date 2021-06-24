#include <iostream>
using namespace std;

int main() {
    long long int even = 0, uneven = 0;
    bool flag = false;
    char t;

    while (cin >> t) {
        if (flag)
            even += t - '0';
        else
            uneven += t - '0';
        flag = !flag;
    }

    if (even < uneven)
        swap(even, uneven);

    if ((even - uneven) % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}