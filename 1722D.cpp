#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll cur = 0;
    for (int i=0;i<n; i++) {
        if (s[i]=='L')
            cur+=i;
        else
            cur+=n-1-i;
    }
    vector<ll> ans;
    int l=0,r=n-1;
    while (l<r) {
        ll gain=(n-1-l)-l;   // = r - l

        if (s[l]=='L') {
            cur+=gain;
            ans.push_back(cur);
        }
        if (s[r]== 'R') {
            cur+=gain;
            ans.push_back(cur);
        }
        l++;
        r--;
    }
    while((int)ans.size()<n)
        ans.push_back(cur);
    for (ll x:ans)
        cout <<x<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
