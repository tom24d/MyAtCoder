#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef unsigned long long ll;

int main(){
    ll a,b,x;
    cin >> a >> b >> x;
    ll ans = 0;
    ll start = x/a;
    if(start > b*18)start -= b*18;
    else start = 2;
    // cout << start << endl;
    start--;
    for(ll i= start;a*i+b*((int)log10(i)+1)<=x; i++){
        // cout << a*i+b*((int)log10(i)+1) << endl;
        if(ans < a*i+b*((int)log10(i)+1))ans = i;
        else break;
    }

    cout << ans << endl;
    return 0;
}
