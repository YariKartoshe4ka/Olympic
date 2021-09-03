#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a;

    sort(a.begin(), a.end());

    b = a;
    reverse(b.begin(), b.end());

    int last_zero_index = a.rfind('0', -1);

    if (last_zero_index == -1)
        cout << a;
    else
        cout << a[last_zero_index + 1] << string(last_zero_index + 1, '0') << a.substr(last_zero_index + 2);

    cout << ' ' << b << endl;

    return 0;
}