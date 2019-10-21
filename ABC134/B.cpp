#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    d = 2*d+1;

    int ans = n/d;
    if(n%d!=0)ans++;

    cout << ans << endl;
    return 0;
}
