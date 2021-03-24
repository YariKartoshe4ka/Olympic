#include <iostream>
using namespace std;

int main() {
    char a;
    short int sum = 0, max = 0;

    while (cin >> a) {
        sum = (a == '0' ? sum + 1 : 0);
        max = (max < sum ? sum : max);
    }

    cout << max << endl;

    return 0;
}