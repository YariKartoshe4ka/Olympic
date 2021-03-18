input()
a = [i for i in input().split()]

for i in range(int(input())):
    l, r = [int(i) for i in input().split()]
    print(*a[l - 1:r])
