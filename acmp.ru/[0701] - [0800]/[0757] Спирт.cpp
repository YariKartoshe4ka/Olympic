#include <iostream>
using namespace std;


int main() {
    long long int C, H, O;
    cin >> C >> H >> O;

    cout << min(C / 2, min(H / 6, O)) << endl;

    return 0;
}