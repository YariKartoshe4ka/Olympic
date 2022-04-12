#include <iostream>
using namespace std;


template<typename T>
T max4(T a, T b, T c, T d) {
    return max(a, max(b, max(c, d)));
}

template<typename T>
T min3(T a, T b, T c) {
    return min(a, min(b, c));
}


int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];


    int amax = -1, bmax = -1;

    for (int i = 1; i < n - 1; ++i)
        amax = a[i] > amax ? a[i] : amax;

    for (int i = 1; i < m - 1; ++i)
        bmax = b[i] > bmax ? b[i] : bmax; 


    cout << max4(
        min(a[0], b[m - 1]),
        min(a[n - 1], b[0]),
        min3(a[0], a[n - 1], bmax),
        min3(b[0], b[m - 1], amax)
    ) << endl;

    return 0;
}