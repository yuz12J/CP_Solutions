#include <bits/stdc++.h>
#define F(i,x,y) for (int i=(x);i<=(y);i++)
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    F(i,1,n) cin>>a[i];
    F(i,1,n) cin>>b[i];
    sort(a.begin()+1,a.end(),greater<int>());
    int h=0;
    int s=0;
    ll ans=0;
    F(i,1,n){
        while (h<n && s+b[h+1]<=i){
            h+=1;
            s+=b[h];
        }
        ans=max(ans,a[i]*1ll*h);
    }
    cout<<ans<<"\n";
}

int main(){
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}