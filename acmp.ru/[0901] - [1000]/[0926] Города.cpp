#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, cities = 0, cnt = 0;
    cin >> n;

    string box[n] = {""};

    char t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;

            if (t == 'C')
                cities++;
            box[i].push_back(t);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (box[i][j] == 'C')
                cnt++;

            if (cnt <= cities / 2)
                cout << 1;
            else
                cout << 2;
        }

        cout << endl;
    }

    return 0;
}
