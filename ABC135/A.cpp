#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int A, B;

    cin >> A >> B;

    if((A-B)%2==1){
        puts("IMPOSSIBLE");
        return 0;
    }

    cout << (A+B) / 2 << endl;
    return 0;
}
