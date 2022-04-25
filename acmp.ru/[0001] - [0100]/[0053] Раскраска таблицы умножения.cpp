#include <iostream>
using namespace std;

int main() {
    int n, m, red = 0, green = 0, blue = 0, black = 0, t;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            t = i * j;

            if (t % 5 == 0)
                blue++;
            else if (t % 3 == 0)
                green++;
            else if (t % 2 == 0)
                red++;
            else
                black++;
        }
    }

    printf("RED : %d\nGREEN : %d\nBLUE : %d\nBLACK : %d\n",
           red, green, blue, black);

    return 0;
}
