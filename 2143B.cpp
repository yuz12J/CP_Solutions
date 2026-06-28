#include <bits/stdc++.h>
#define F(i,x,y) for (int i=(x);i<y;i++)
#define ll long long
using namespace std;

void solve(){
    int n;int k;
    cin>>n;cin>>k;
    vector<int> a(n);
    vector <int> b(k);
    F(i,0,n) cin>>a[i];
    F(i,0,k) cin>>b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    ll ans=0;
    int ind=0;
    int l=0;
    F(i,0,n){
        ans+=a[i];
        if (ind<k){
            if ((i-l+1)==b[ind]){
                l=i+1;
                ans-=a[i];
                ind+=1;
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}