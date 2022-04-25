#include <iostream>
using namespace std;


int main() {
    int n, m, counter[1001] = {0}, temp, cnt = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> temp;

        if (temp >= 0)
            counter[temp]++;
    }

    for (int i = 1000; i > 0 && m > 0; i--) {
        for (int j = 0; j < counter[i] && m > 0; j++) {
            cnt += i;
            m--;
        }
    }

    cout << cnt << endl;


    return 0;
}
