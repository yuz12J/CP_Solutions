#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;ll x;
    cin>>n>>x;
    ll best=0;
    for (int i=0;i<n;i++){
        ll a, b, c;
        cin>>a >> b >> c;
        best=max<ll>(a*b-c,best);
        x -= a*(b-1);
    }
    if (x<=0){
        cout<<0<<"\n";
    } else if (best > 0) cout<<((x+best-1)/best)<<"\n";
    else cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}