#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int tap = 1;
    int ans = 0;
    int A, B;
    cin >> A >> B;

    while(tap<B){
        tap--;
        tap += A;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
