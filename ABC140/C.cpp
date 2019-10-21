#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;


int main(){
    int n;
    cin >> n;
    int d[101];
    int ans = 0;

    rep(i, n-1)cin >> d[i];

    ans += d[0];

        // cout << "ans : " << ans << endl;


    rep(i, n-2){
        int a = d[i];
        int b = d[i+1];
        ans += min(a, b);
        // cout << "ans : " << ans << endl;
    }

    ans += d[n-2];

    cout << ans << endl;

    return 0;
}
