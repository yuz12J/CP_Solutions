#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> b(n+1);
    bool ok=true;
    for (int i=1;i<=n;i++) cin>>b[i];
    ll temp=b[1];
    for (int i=1;i<=n;i++){
        if (temp>b[i])
            temp=b[i];
        if (i>1 && b[i-1]<b[i]){
            if ((temp*2)<=b[i]){
                ok=false;
                break;
            }
        }
    }
    if (ok)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
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
