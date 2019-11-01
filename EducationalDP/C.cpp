#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    int table[100001][3];
    rep(i, n)rep(j, 3){
        cin >> table[i][j];
    }

    int dp[100001][3];

    int temp = 0;
    rep(i, 3){
        if(temp < table[0][i]){
            dp[0][i] = table[0][i];
        }
    }

    for(int i = 1; i < n; i++){
        rep(j, 3){
            int temp = 0;
            rep(k, 3){
                if(j!=k){
                    temp = max(temp, dp[i-1][k] + table[i][j]);
                }
            }
            dp[i][j] = temp;
        }
    }

    int ans = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});

    cout << ans << endl;
    return 0;
}
