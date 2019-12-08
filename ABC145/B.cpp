#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    if(n%2==1){cout << "No" << endl;return 0;}

    string half = s.substr(n/2);

    cout << ((s == half+half) ? "Yes" : "No") << endl;

    return 0;
}
