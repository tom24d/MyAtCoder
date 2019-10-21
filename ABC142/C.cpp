#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> data(n);

    rep(i, n){
        int temp;
        cin >> temp;
        data[i] = make_pair(temp, i+1);
    }

    sort(data.begin(), data.end());

    rep(i, n){
        cout << data[i].second << " ";
    }

    cout << endl;

    return 0;
}
