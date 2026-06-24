t=int(input())
for _ in range(t):
    n=int(input())
    p=list(map(int,input().split()))
    a=list(map(int,input().split()))
    pos=[0]*(n+1)
    for i in range(n):
        pos[p[i]]=i
    ok=True
    last=-1
    for i in range(n):
        if pos[a[i]]<last:
            ok=False
            break
        last=pos[a[i]]
    print("YES" if ok else "NO")