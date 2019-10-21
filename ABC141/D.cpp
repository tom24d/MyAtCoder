#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<int> data;

    rep(i, n){
        int temp;
        cin >> temp;
        data.push(temp);
    }

    rep(i, m){
        int d = data.top();
        data.pop();
        data.push(d/2);
    }

    ll ans = 0;
    rep(i, n){
        ans += data.top();
        data.pop();
    }

    cout << ans << endl;

    return 0;
}
