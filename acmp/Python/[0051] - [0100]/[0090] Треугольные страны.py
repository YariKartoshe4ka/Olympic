x0, y0 = [int(i) for i in input().split(' ')]
triangles = list()
out = list()

for i in range(int(input())):
    triangles.append([int(j) for j in input().split(' ')])
    triangles[i].append(i + 1)
    
for t in triangles:
    x1, y1, x2, y2, x3, y3, id = t
    
    a = (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
    b = (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
    c = (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)

    if (a > 0 and b > 0 and c > 0) or (a < 0 and b < 0 and c < 0):
        out.append(id)

print(len(out))
print(' '.join(sorted([str(i) for i in out])))
