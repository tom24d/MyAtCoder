#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;


    int ans = C - A + B;

    cout << (ans>=0? ans : 0) << endl;
    return 0;
}
