input()
a = set([int(i) for i in input().split()])
b = set([int(i) for i in input().split()])

print(' '.join([str(i) for i in sorted(a & b)]))