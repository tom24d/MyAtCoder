#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, ans = 0;
    string s;
    cin >> n;

    for(;n!=0;n--){
    s = to_string(n);
    if(s.size()%2!=0) ans++;
    }

    cout << ans << endl;
    return 0;
}
