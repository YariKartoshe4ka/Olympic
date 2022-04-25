#include <iostream>
#include <cstring>
using namespace std;


long long int convert(int number, unsigned short int base) {
    string out = "";

    while (number > 0) {
        out += to_string(number % base);
        number /= base;
    }

    char* p;
    return strtoll(out.c_str(), &p, 10);
}


int main() {
    int x;
    cin >> x;

    long long int tmp;
    long long int max = -1;

    for (int i = 2; i < 10; i++) {
        tmp = convert(x, i);
        if (max < tmp)
            max = tmp;
    }

    cout << max << endl;

    return 0;
}
