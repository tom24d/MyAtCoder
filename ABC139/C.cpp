#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    int data[100001];
    int ans = 0, temp=0;

    rep(i, n)cin >> data[i];

    rep(i, n-1){
        if(data[i]>=data[i+1]){
            temp++;
        }else{
            ans = max(ans,temp);
            temp=0;
        }
    }

    ans = max(ans,temp);

    cout << ans << endl;

    return 0;
}
