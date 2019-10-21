#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
typedef long long ll;

int main() {
    string s;
    cin >> s;
    int counter = 1;
    vector<int> ans(sz(s), 0);
    bool b;

    rep(i, sz(s)-1){
        if(!b&&'R'==s[i]&&'L'==s[i+1]){

            int rnum = (counter + 1) / 2;
            int lnum = counter / 2;
            ans[i]+=rnum;
            ans[i+1]+=lnum;
            counter=1;
            b=true;

            continue;
        }
        if(b&&'L'==s[i]&&'R'==s[i+1]){
            int lnum = (counter + 1) / 2;
            int rnum = counter / 2;
            ans[i-counter+1]+=lnum;
            ans[i-counter]+=rnum;
            counter=1;
            b=false;

            continue;
        }

        counter++;
    }

    if(b){
        int lnum = (counter + 1) / 2;
        int rnum = counter / 2;
        ans[sz(s)-counter]+=lnum;
        ans[sz(s)-counter-1]+=rnum;
    }else{
        ans[sz(s)-1]++;
        ans[sz(s)-2]++;
    }

    rep(i, sz(s)){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}
