a = input()
b = input()

rez = 0
shifts = []


def prefix(pattern):
    pi = [0]
    
    for i in range(1, len(pattern)):
        j = pi[i - 1]
        while j > 0 and pattern[j] != pattern[i]:
            j = pi[j - 1]
        pi.append(j + 1 if pattern[j] == pattern[i] else j)
    return pi


def kmp(T, P):
        pi, A, j = prefix(P), [], 0
        
        for i in range(len(T)):
            while j > 0 and T[i] != P[j]:
                j = pi[j - 1]
            if T[i] == P[j]: j += 1
            if j == len(P): 
                A.append(i - (j - 1))
                j = pi[j - 1]
            
        return A


for i in range(len(b)):
    shifts.append(b[i:] + b[:i])

shifts = set(shifts)

for shift in shifts:
    rez += len(kmp(a, shift))



print(rez)
