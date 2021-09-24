s = sorted([[int(i) for i in input().split()] for _ in range(int(input()))])

for i in s:
    print(' '.join(map(str, i)))
