#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, ans=0;
    cin >> n;
    vector<int> p(n);
    rep(i,n)cin >> p[i];

    for(int i = 1; i < n - 1; ++i){
        vector<int> s(3);
        s[0] = p[i-1];
        s[1] = p[i];
        s[2] = p[i+1];
        sort(s.rbegin(), s.rend());
        s.erase(s.begin());
        if(s[0]==p[i])ans++;
    }

    cout << ans << endl;

    return 0;
}
