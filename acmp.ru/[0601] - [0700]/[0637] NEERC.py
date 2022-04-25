input()
a = [int(i) for i in input().split()]
k = int(input())
s = 0

for i in a:
    s += min(i, k)

print(s)
