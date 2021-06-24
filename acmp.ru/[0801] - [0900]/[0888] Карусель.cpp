#include <iostream>
using namespace std;

int main() {
    int n;
    bool t;
    long long int rez = 0, score = 3;

    cin >> n;

    while (cin >> t) {
        if (t) {
            rez += score;
            score++;
        }
        else
            score = max(score - 3, 3LL);
    }

    cout << rez << endl;

    return 0;
}