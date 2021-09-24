#include <iostream>
using namespace std;

int main() {
    int n, a = 1, b = 1;

    cin >> n;

    for (int i = 0; i < n % 60; i++) {
        int temp = a;
        a = (a + b) % 10;
        b = temp;
    }

    cout << b << endl;

    return 0;
}