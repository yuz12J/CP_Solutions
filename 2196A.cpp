#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll p;ll q;
    cin>>p;cin>>q;
    if (p>=q){
        cout<<"Alice"<<"\n";
        return;
    }
    else{
        ll a=q-p;
        if (3*a>q){
            cout<<"Alice"<<"\n";
            return;
        }
        else
            cout<<"Bob"<<"\n";
            return;
    }
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