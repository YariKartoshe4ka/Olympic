import sys

sys.stdin = open('intersec1.in', 'r')
sys.stdout = open('intersec1.out', 'w')

a1, b1, c1, a2, b2, c2 = map(int, input().split())

y = (a2 * c1 - c2 * a1) / (b2 * a1 - a2 * b1)
x = -(b1 * y + c1) / a1

print(x, y)
