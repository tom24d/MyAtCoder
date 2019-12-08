#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    string s;
    cin >> s;

    int size = sz(s);

    int ans = 0;
    for(int i = 0; i < size/2; i++){
        if(s.at(i)!=s.at(size-1-i))ans++;
    }

    cout << ans << endl;
}
