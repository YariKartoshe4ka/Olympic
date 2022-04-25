#include <iostream>
using namespace std;

int main() {
    short int n, i;
    int a = 0, b = 1, temp;

    cin >> n;

    for (i = 0; i < n; i++) {
        temp = a;
        a = b;
        b = temp + b;
    }

    cout << a << endl;

    return 0;
}
