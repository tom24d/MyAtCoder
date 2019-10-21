#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    int d[51];
    int ans = 0;

    rep(i, n)cin >> d[i];

    rep(i, n-1){
        for(int j = i+1; j < n; j++){
            ans += d[i]*d[j];
        }
    }

    cout << ans << endl;

    return 0;
}
