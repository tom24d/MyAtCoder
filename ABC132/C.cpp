#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n)cin >> d[i];

    sort(d.begin(), d.end());

    cout << d[n/2]-d[(n-1)/2] << endl;

    return 0;
}
