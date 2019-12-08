#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef unsigned long long ll;

int main(){
    int n;
    cin >> n;
    int dp[16][16];
    rep(i, 16)rep(j, 16)dp[i][j]=-1;

    int an;
    cin >> an;
    int num=0;
    rep(i, an){
        int x,y;
        cin >> x >> y;
        if(y==1){dp[x][0]=1;num++;}else{dp[x][0]=0;}
    }
    dp[1][16]=num;

    for(int i = 2; i <= n; i++){
        cin >> an;
        int temp[16];
        int num=0;
        rep(k, 16)temp[k]=-1;
        rep(k, an){
            int x,y; cin >> x >> y;
            if(y==1){temp[x]=1;num++;}else{temp[x]=0;}
        }

        if(dp[i][0]==0){
            //iがうそつきの可能性があるなら
            if(dp[i-1][16]>num){
                //iは無視する
                for(int h=1;h<=n;h++)dp[i][h]=dp[i-1][h];
            }else{
            //i-1以下を無視
                for(int h = i+1; h <= n; h++)dp[h][0]=-1;
                for(int h = 1; h <= n; h++)dp[i][h]=temp[h];
                //信用情報をリセット
                rep(h, 16){
                    if(temp[h]==1){
                        dp[h][0]=1;
                    }else if(temp[h]==0){
                        dp[h][0]=0;
                    }
                }
                dp[i][16]=num;    
            }
        }else{
            //信用できそうなら
            for(int g = 1; g <= n; g++){
                if(temp[g]==0&&dp[i-1][g]==0){dp[i][g]=0;}
                else{dp[i][g]=max(dp[i-1][g], temp[g]);}
            }
            for(int u = 1; u <= n; u++){
                if(temp[u]==1)dp[u][0]=1;
                else if(temp[u]==0)dp[u][0]=0;
            }
        }
    }
    int ans = 0;
    for(int k = 1; k <= n; k++){
        if(dp[n][k]==1)ans++;
    }
    cout << ans << endl;
    return 0;
}
