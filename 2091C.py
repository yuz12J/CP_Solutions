t=int(input())
for _ in range(t):
    n=int(input())
    if n%2==0:
        print(-1)
    else:
        ans=[i for i in range(n-1,0,-1)]+[n]
        print(*ans)