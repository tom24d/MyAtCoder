#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    double ans;

    if(n==1) ans = 1.0;
    else if(n%2==0) ans = 0.5;
    else if(n%2==1) ans = (n/2+1.0)/(double)n;

    printf("%.8f\n", ans);
    return 0;
}
