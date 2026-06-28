#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long ans;
    for (int i=0;i<n;i++) cin>>a[i];
    ans=a[0];
    for (int i=1;i<n;i++){
        if (ans>a[i])
            ans+=a[i];
        else
            ans=a[i];
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