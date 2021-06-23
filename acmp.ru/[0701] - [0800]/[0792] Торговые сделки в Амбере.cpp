#include <iostream>
using namespace std;

int count(int number, int base) {
    int cnt = 0;

    while (number != 0) {
        cnt += number % base;
        number /= base;
    }

    return cnt;
}

int main() {
    int n1, p1, k1, n2, p2, k2;
    cin >> n1 >> p1 >> n2 >> p2;

    k1 = count(n1, p1);
    k2 = count(n2, p2);

    if (k1 == k2)
        cout << k1 << endl;
    else
        cout << 0 << endl;

    return 0;
}