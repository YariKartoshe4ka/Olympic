n = int(input())
heights = [int(i) for i in input().split(' ') if i != '']


F = [0, abs(heights[1] - heights[0]) if n > 1 else heights[0]] + [0] * (n - 2)

for i in range(2, n):
    F[i] = min(F[i-1] + abs(heights[i] - heights[i-1]), F[i-2] + 3 * abs(heights[i] - heights[i-2]))

print(F[n-1])
