#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[100001];
    rep(i, n){
        cin >> h[i];
    }
    int dp[100001];
    dp[0]=0;
    for(int i=1; i<n; i++){
        if(i==1){
            int cost = dp[0];
            dp[i] = cost + abs(h[i] - h[0]);
        }else{
            int c1 = dp[i-1];
            int c2 = dp[i-2];
            dp[i] = min(c1 + abs(h[i] - h[i-1]), c2 + abs(h[i] - h[i-2]));
        }
    }

    cout << dp[n-1] << endl;

    return 0;
}
