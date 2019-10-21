#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    char temp = 0;
    int ans = 0;

    rep(i, sz(s)){
        if(temp == 0){
            temp = s.at(i);
            ans++;
        }else if(temp==s.at(i)){
            continue;
        }else{
            temp = s.at(i);
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
