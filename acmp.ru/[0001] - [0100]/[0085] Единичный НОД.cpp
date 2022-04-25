#include <iostream>
#include <cstring>
using namespace std;

int gcd(int a, int b) {
    int temp;

    while (b) {
        temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << string(gcd(a, b), '1') << endl;

    return 0;
}
