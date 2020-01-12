#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef unsigned long long ll;

int h, w;
int s[21][21];


void dfs(int i, int j){


    //up0
    if(i-1<0);
    else if(s[i-1][j]==-1);
    else {
        s[i-1][j] = s[i][j]+1;
        dfs(i-1,j);
    }


    //down1
    if(i+1>=h);
    else if(s[i+1][j]==-1);
    else {
        s[i+1][j] = s[i][j]+1;
        dfs(i+1, j);
    }

    //left2
    if(j-1<0);
    else if(s[i][j-1]==-1);
    else {
        s[i][j-1] = s[i][j] + 1;
        dfs(i, j-1);
    }

    //right3
    if(j+1>=w);
    else if(s[i][j+1]==-1);
    else {
        s[i][j+1] = s[i][j] + 1;
        dfs(i, j+1);
    }

    return;

}

int findmax(){
    int ans = 0;
    rep(i, h)rep(j, w){
        ans = max(ans, s[i][j]);
    }

    return ans;
}

int main(){
    cin >> h >> w;
    int sss[21][21];

    rep(i, h)rep(j, w){
        char ss;
        cin >> ss;

        if(ss=='.')
        sss[i][j] = 0;
        else if(ss=='#')
        sss[i][j] = -1;
    }

    // rep(i, h){rep(j, w){
    //     cout << s[i][j] << " ";
    // }cout << endl;}

    int ans = 0;
    rep(i, h)rep(j, w){

        rep(ii, h)rep(jj, w){
            s[ii][jj] = sss[ii][jj];
        }
        if(s[i][j]==0){
        dfs(i, j);
            ans = max(ans, findmax());
    }}

    cout << ans << endl;

    return 0;
}
