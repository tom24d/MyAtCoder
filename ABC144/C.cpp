#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef unsigned long long ll;

bool isPrime(ll n){
    if(n<=1) return false;
    if(n==2) return true;

    if(n%2==0) return false;
    if(n%3==0) return false;

    if(n%6!=1 && n%6 != 5) return false;

    for(ll i = 5; i*i<=n; i+=6){
        if(n%i == 0) return false;
        if(n%(i+2) == 0) return false;
    }

    return true;
}

int main(){
    ll n;
    cin >> n;
    ll ans = n-1;
    ll a,b;

    if(isPrime((ll)n)){
        cout << n - 1 << endl; return 0;
    }
    
    for(int i = 2; i <= n-1; ++i){
        if(n%i!=0)continue;
        if(i*i>n){
            cout << ans  << endl;
            // cout << a << " " << b << endl;
            return 0;
        }
        for(int j = 2; j <= n-1; ++j){
            if(n%j!=0)continue;
            if(ans<(ll)(i-1)+(ll)(j-1))break;
            if(i*j>n)break;
            if(i*j==n){
                ans = min(ans, (ll)(i-1)+(ll)(j-1)); a=i; b=j;
            }
        }

    }

            cout << ans << endl; return 0;
}
