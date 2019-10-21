#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;


int main(){
    int n, temp;
    cin >> n;
    vector<int> data(n);
    rep(i, n)cin >> data[i];

    temp = distance(data.begin(), max_element(data.begin(), data.end()));

    sort(data.begin(), data.end(), greater<int>());

    rep(i, n){
        if(temp==i){
            cout << data[1] << endl;
        }else{
            cout << data[0] << endl;
        }
    }

    return 0;
}
