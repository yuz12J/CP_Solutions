#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    int cnte=0;
    int cnto=0;
    for (int i=0;i<n;i++){
        if (a[i]=='1' && i%2==1) cnte++;
        else if (a[i]=='1' && i%2==0) cnto++;
    }
    for (int i=0;i<n;i++){
        if (b[i]=='0' && i%2==0) cnte--;
        else if (b[i]=='0' && i%2==1) cnto--;
    }
    if (cnte<=0 && cnto<=0) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
