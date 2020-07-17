maxJump,n=map(int,input().split())

if maxJump == 1:
    print(1)
else:
    a=[1,1]+[0]*(1+n-2)
    for i in range(2,maxJump+1):
        a[i]=a[i-1] << 1
        for i in range(maxJump+1,n+1):
            a[i]=(a[i-1] << 1) - a[i-1-maxJump]

    print(a[n])
