#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, k, m;
    cin >> n >> k >> m;
    int nm = n*m;
    rep(i, n-1){
        int temp;
        cin >> temp;
        nm -= temp;
    }

    if(nm > k){
        cout << -1 << endl;
    }else if(nm < 0){
        cout << 0 << endl;
    }else{
        cout << nm << endl;
    }

    return 0;
}
