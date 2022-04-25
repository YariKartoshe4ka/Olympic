#include <iostream>
using namespace std;


const int N = 250000 / 2 + 2;
const uint32_t inf = (1ULL << 32) - 1;


struct Heap {
    uint32_t a[N] = {0};
    int size = 0;

    void siftUp(int i) {
        while (a[i] < a[(i - 1) / 2]) {
            swap(a[i], a[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void siftDown(int i) {
        while (i * 2 + 1 < size) {
            int l = i * 2 + 1, r = i * 2 + 2, j = l;

            if (r < size && a[r] < a[l]) j = r;
            if (a[i] <= a[j]) break;

            swap(a[i], a[j]);
            i = j;
        }
    }

    void push(uint32_t x) {
        ++size;
        a[size - 1] = x;
        siftUp(size - 1);
    }

    uint32_t pop() {
        --size;
        uint32_t ret = a[0];
        a[0] = a[size];

        siftDown(0);

        return ret;
    }
};


int main() {
    int n, cnt = 0;
    cin >> n;

    Heap heap;

    for (int i = 0; i < n; ++i) {
        uint32_t t;
        cin >> t;

        heap.push(t);

        if (heap.size == N) {
            ++cnt;
            heap.pop();
        }
    }

    for (int i = 0; i < (n - 1) / 2 - cnt; ++i) heap.pop();

    if (n % 2)
        cout << heap.pop() << endl;
    else {
        uint64_t ans = heap.pop();
        ans += heap.pop();

        cout << ans / 2;
        if (ans % 2) cout << ".5" << endl;
    }

    return 0;
}
