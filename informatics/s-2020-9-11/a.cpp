#include <iostream>
#include <cstring>
using namespace std;


int convert(int number, unsigned short int base) {
    string out = "";

    while (number > 0) {
        out += to_string(number % base);
        number /= base;
    }

    return atoi(out.c_str());
}


int main() {
    int x;
    cin >> x;

    int tmp;
    int max = -1;
    
    for (int i = 2; i < 10; i++) {
        tmp = convert(x, i);
        if (max < tmp)
            max = tmp;
    }

    cout << max << endl;
    return 0;
}