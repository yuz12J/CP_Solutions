#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    if (a%2==0 && b%2==1) cout<<-1;
    else if (a%2==1 && b%2==0){
        if ((b/2)%2==1) cout<<-1;
        else cout<<(a*(b/2))+b/(b/2);
    }
    else if (a%2==0 && b%2==0) cout<<(a*(b/2))+b/(b/2);
    else if (a%2==1 && b%2==1) cout<<a*b+1;
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while (t--) solve();
    return 0;
}