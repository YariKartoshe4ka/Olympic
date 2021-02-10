x = int(input())
rez = x

for i in range(1, x+1):
    if x % i == 0:
        s1 = [int(a) for a in list(str(i))]
        #s2 = [int(a) for a in list(str(x))]
        s2 = [int(a) for a in list(str(rez))]
        if sum(s1) > sum(s2):
            rez = ''.join([str(a) for a in s1])
        elif sum(s1) == sum(s2):
            s1 = ''.join([str(a) for a in s1])
            s2 = ''.join([str(a) for a in s1])
            if len(s1) < len(s2): rez = s1

print(rez)