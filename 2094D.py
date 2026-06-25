t=int(input())
for _ in range(t):
    p=input()
    s=input()
    p=("R" if p[0]=="L" else "L")+p+("R" if p[-1]=="L" else "L")
    s=("R" if s[0]=="L" else "L")+s+("R" if s[-1]=="L" else "L")
    ok=True
    lg=[]
    m=0
    for i in range(1,len(p)-1):
        if p[i-1]!=p[i]:
            m=i
        if p[i+1]!=p[i]:
            lg.append((i-m+1,p[m]))
    l=0
    ind=0
    for r in range(1,len(s)-1):
        if ind<len(lg):
            val,tp=lg[ind]
        else:
            ok=False
            break
        if s[r-1]!=s[r]:
            l=r
        if s[r+1]!=s[r]:
            if not (val<=(r-l+1)<=val*2) or s[l]!=tp:
                ok=False
                break
            ind+=1
    print("YES" if ok and ind==len(lg) else "NO")