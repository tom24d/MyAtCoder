#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n ;
    int a[22], b[22], c[22];
    rep(i, n){
        int t;
        cin >> t;
        a[i] = t-1;}
    rep(i, n){
        int t;
        cin >> t;
        b[i] = t;}
    rep(i, n-1){
        int t;
        cin >> t;
        c[i] = t;}
    int ans = 0;

    rep(i, n){
        ans += b[a[i]];
        // cout << b[a[i]] << endl;
        if(i!=n-1&&a[i]-a[i+1]==-1) ans += c[a[i]];
    }

    cout << ans << endl;
    return 0;
}
