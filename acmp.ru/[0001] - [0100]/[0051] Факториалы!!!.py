def factorial(n, step):
    out = 1
    for i in range(n, 0, step*-1):
        out *= i
    return out

a = input().split(' ')
print(factorial(int(a[0]), len(a[1])))
