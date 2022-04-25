#include <iostream>
using namespace std;

int main() {
    int n, tmp_n, cnt = 0;
    cin >> n;

    tmp_n = n;

    while (tmp_n != 0) {
        cnt += tmp_n % 2;
        tmp_n /= 2;
    }

    cout << n + cnt << endl;

    return 0;
}
