sp = input()
x = int(input())

if sp == 'Home':
    print('Yes')
else:
    if x % 2 == 0:
        print('No')
    else:
        print('Yes')

# print('Yes' if input() == 'Home' or int(input()) % 2 else 'No')