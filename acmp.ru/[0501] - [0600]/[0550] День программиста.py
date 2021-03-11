n = int(input())
print(f'{13 - (n % 4 == 0 and n % 100 != 0 or n % 400 == 0)}/09/{n:04}')
