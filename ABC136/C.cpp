#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);

    rep(i, n) cin >> s[i];

    rep(i, n-1){
        if(s[i]<=s[i+1])continue;
        else {
            if(s[i+1] - s[i] == -1){
                s[i+1]++;
                continue;
            }else{
                puts("No");
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
