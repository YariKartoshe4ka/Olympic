n = int(input())

def one(a):
    c = 0
    flag = False
    for i in range(len(a)):
        try:
            if flag:
                if a[i] < a[i+1]:
                    c += 1
                    flag = True
                else:
                    c = 0
                    flag = False
            else:
                if a[i] > a[i+1]:
                    c += 1
                    flag = False
                else:
                    c = 0
                    flag = True
        except:
            if flag

if n < 3:
    print(n)
else:
    a = [int(i) for i in input().split(' ')]
    #print(max(one(a), two(a), three(a), four(a)))
    print(one(a))
