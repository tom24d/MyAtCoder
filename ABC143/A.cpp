#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    b = 2*b;

    if(a<=b){cout << 0 << endl;return 0;}

    cout << a-b << endl;

    return 0;
}
