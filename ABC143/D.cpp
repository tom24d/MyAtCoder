#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    int ans = 0;

    rep(i, n)cin >> l[i];

    sort(l.begin(), l.end(), greater<int>());

    rep(i, n-2){
        int a = l[i];
        for(int j = i+1; j < n - 1; j++){
            int b = l[j];
            for(int k = j + 1; k < n; k++){
                if(a<b+l[k]){ans++;
              //  cout << a << " " << b << " " << l[k] << endl;
                }
                else break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
