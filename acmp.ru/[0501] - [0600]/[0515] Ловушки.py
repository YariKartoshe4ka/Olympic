n = int(input())
x = y = l = 0

for _ in range(n):
    xi, yi = map(int, input().split())

    l += ((x - xi)**2 + (y - yi)**2)**.5
    x, y = xi, yi

l += (xi**2 + yi**2)**.5

print(f'{l:.03f}')
