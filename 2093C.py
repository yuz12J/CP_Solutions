def check(x):
    i=2
    while i*i<=x:
        if x%i==0:
            return False
        i+=1
    return True
t=int(input())
for _ in range(t):
    x,k=map(int,input().split())
    ok=False
    if k==1:
        if check(x) and x>1:
            ok=True
    if x==1 and k==2:
        ok=True
    print("YES" if ok else "NO")