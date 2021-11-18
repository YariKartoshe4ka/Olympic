class Tree:
    def __init__(self, n):
        self.n = 1
        while self.n < n:
            self.n *= 2

        self.tree = [0] * self.n * 2

    def set(self, i, x):
        i = self.n + i - 1
        self.tree[i] = x

        while i > 1:
            i //= 2
            self.tree[i] = self.tree[i * 2] + self.tree[i * 2 + 1]

    def get(self, l, r):
        l += self.n - 1
        r += self.n - 1
        s = 0

        while r >= l:
            if l % 2 != 0: s += self.tree[l]
            if r % 2 == 0: s += self.tree[r]
            l = (l + 1) // 2
            r = (r - 1) // 2

        return s


_n, m = map(int, input().split())
t = Tree(_n)


for _ in range(m):
    x, a, b = map(int, input().split())

    if x == 1:
        print(t.get(a, b))
    else:
        t.set(a, b)
