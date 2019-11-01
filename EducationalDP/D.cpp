#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main(){
    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> wv(n);
    rep(i, n){
        int t1, t2;
        cin >> t1 >> t2;
        wv[i] = make_pair(t1, t2);
    }

    ll dp[n][w+1];
    rep(i, w+1){
        if(wv[0].first <= i){
            dp[0][i] = wv[0].second;
        }else{
            dp[0][i] = 0;
        }
    }

    for(int i = 1; i <n; i++){
        int w_current = wv[i].first;
        int v_current = wv[i].second;
        rep(j, w+1){
            ll temp = 0;
            if(j>=w_current){
                temp = dp[i-1][j-w_current] + v_current;
            }
             temp = max(temp, dp[i-1][j]);
            dp[i][j] = temp;
        }
    }
    
    cout << dp[n-1][w] << endl;

    return 0;
}
