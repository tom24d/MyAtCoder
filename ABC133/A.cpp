#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, a, b;

    cin >> n >> a >> b;

    cout << min(b, a*n) << endl;
    return 0;
}
