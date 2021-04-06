#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int tmp;

    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << a * b / gcd(a, b) << endl;

    return 0;
}