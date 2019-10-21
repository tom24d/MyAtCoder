#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;


int main(){
    int n, k, q;
    int point[100005];


    cin >> n >> k >> q;

    rep(i, n+1)point[i] = 0;

    rep(i, q){
        int temp;
        cin >> temp;
        point[temp+1]++;
    }

    for(int i = 1; i < n+1; i++){
        cout << (k-(q-point[i+1])>0 ? "Yes" : "No") << endl;
    }

    return 0;
}
