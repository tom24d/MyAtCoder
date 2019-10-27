#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

bool hasDouble(int i, int tbl[100001][3], int target){
    int t = 0;
    if(tbl[i][0] == target) t++;
    if(tbl[i][1] == target) t++;
    if(tbl[i][2] == target) t++;

    return (t >= 2);
}

int main(){
    int n;
    cin >> n;
    int table[100001][3];
    rep(i, n)rep(j, 3){
        cin >> table[i][j];
    }

    int ch[100001];
    int dp[100001];

    int temp = 0;
    rep(i, 3){
        if(temp < table[0][i]){
            ch[0] = i;
            temp = table[0][i];
        }
    }
    dp[0] = temp;

    for(int i = 1; i < n; i++){
        temp = 0;
        rep(j, 3){
            if(temp < dp[i-1] + table[i][j] && ch[i-1]!=j){
                ch[i]=j;
                temp = dp[i-1] + table[i][j];
            }else if(temp < dp[i-1] + table[i][j] && ch[i-1]==j && hasDouble(i-1, table, table[i-1][ch[i-1]])){
                ch[i]=j;
                temp = dp[i-1] + table[i][j];
            }
        }
        // cout << temp << endl;
        dp[i] = temp;
    }


    cout << dp[n-1] << endl;
    return 0;
}
