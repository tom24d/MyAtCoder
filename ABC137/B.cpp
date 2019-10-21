#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;


int main() {
    int K, X;

    cin >> K >> X;

    for(int i=X-K+1;i<K+X;i++){
        //if(i<0||100<i)continue;
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
