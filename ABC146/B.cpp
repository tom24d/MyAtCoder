#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    rep(i, sz(s)){
        char u = s.at(i) + n;
        // cout << (int)u << endl;
        if(u > 'A' && u > 'Z') u -= 26;
        s.at(i) = u;
    }

    cout << s << endl;

    return 0;
}
