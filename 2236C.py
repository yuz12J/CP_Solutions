t=int(input())
for _ in range(t):
    a,b,x=map(int,input().split())
    i=0
    ans=10**9+1
    while a!=b:
        if b>a:
            a,b=b,a
        ans=min(ans,abs(a-b)+i)
        a//=x
        i+=1
    ans=min(ans,i)
    print(ans)