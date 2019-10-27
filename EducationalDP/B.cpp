#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int h[100001];
    rep(i, n){
        cin >> h[i];
    }
    int dp[100001];
    dp[0]=0;
    for(int i=1; i<n; i++){
        int temp;
        for(int j = 1; j <= k && i-j >= 0; j++){
            if(j==1){
                temp = dp[i-1] + abs(h[i-1] - h[i]);
            }else{
                temp = min(temp, dp[i-j] + abs(h[i-j] - h[i]));
            }
        }
        dp[i] = temp;
    }

    cout << dp[n-1] << endl;

    return 0;
}
