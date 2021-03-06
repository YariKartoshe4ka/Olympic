#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin >> n;
    int heights[n];
    int F[n] = {0};

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    F[1] = n > 1 ? abs(heights[1] - heights[0]) : 0;

    for (int i = 2; i < n; i++)
        F[i] = min(F[i-1] + abs(heights[i] - heights[i-1]), F[i-2] + 3 * abs(heights[i] - heights[i - 2]));

    cout << F[n-1] << endl;
    return 0;
}