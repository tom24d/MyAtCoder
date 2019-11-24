#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int size = sz(s) + 1;

    vector<int> d(size);
    d[0] = 0;
    rep(i, size-1){
        if(s.at(i)=='<'){
            d[i+1]=d[i]+1;
        }else{
            d[i+1]=d[i]-1;
        }
    }

    int gross = accumulate(d.begin(), d.end(), 0);
    int mn = *min_element(d.begin(), d.end());

    cout << gross + (-mn)*size << endl;

    return 0;
}
