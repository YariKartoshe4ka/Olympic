class Tree:
    def __init__(self, n):
        self.n = 1
        while self.n < n:
            self.n *= 2

        self.tree = [[-0, 0]] * self.n * 2
        # print(self.n)
        # print(*self.tree)

    def set(self, i, x):
        i = self.n + i - 1
        self.tree[i] = [x, x]

        while i > 1:
            i //= 2
            self.tree[i] = [max(self.tree[i * 2][0], self.tree[i * 2 + 1][0]),
                            min(self.tree[i * 2][1], self.tree[i * 2 + 1][1])]

        # print(*self.tree)

    def get(self, l, r):
        l += self.n - 1
        r += self.n - 1
        
        _max = max(self.tree[l][0], self.tree[r][0])
        _min = max(self.tree[l][1], self.tree[r][1])

        while r >= l:
            if l % 2 != 0:
                _max = max(_max, self.tree[l][0])
                _min = min(_min, self.tree[l][1])

            if r % 2 == 0:
                _max = max(_max, self.tree[r][0])
                _min = min(_min, self.tree[r][1])

            l = (l + 1) // 2
            r = (r - 1) // 2

        return _max - _min



_n, m = map(int, input().split())
t = Tree(_n)


for _ in range(m):
    x, a, b = map(int, input().split())

    if x == 1:
        print(t.get(a, b))
    else:
        t.set(a, b)
