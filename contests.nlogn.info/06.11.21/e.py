from math import gcd
from bisect import bisect_left, bisect_right


class Tree:
    def __init__(self, N):
        self.n = 1
        while self.n < N:
            self.n *= 2

        self.tree = [0] * self.n * 2
        self.cnt = {}

        for i, v in enumerate(input().split()):
            v = int(v)
            i += 1

            self.set(i, v)

            if not self.cnt.get(v):
                self.cnt[v] = [i]
            else:
                self.cnt[v].append(i)

    def set(self, i, x):
        i = self.n + i - 1
        self.tree[i] = x

        while i > 1:
            i //= 2
            self.tree[i] = gcd(self.tree[i * 2], self.tree[i * 2 + 1])

    def get(self, l, r):
        _l, _r = l, r

        l += self.n - 1
        r += self.n - 1
        
        ans = 0

        while r >= l and ans != 1:
            if l % 2 != 0: ans = gcd(ans, self.tree[l])
            if r % 2 == 0: ans = gcd(ans, self.tree[r])
            l = (l + 1) // 2
            r = (r - 1) // 2

        print(bisect_right(self.cnt[ans], _r), bisect_left(self.cnt[ans], _l))
        if self.cnt.get(ans):
            return _r - _l - bisect_right(self.cnt[ans], _r) + bisect_left(self.cnt[ans], _l) + 1
        return _r - _l + 1


def main():
    n = int(input())
    t = Tree(n)

    for _ in range(int(input())):
        li, ri = [int(i) for i in input().split()]
        print(t.get(li, ri))

main()
