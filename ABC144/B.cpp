#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n;
    cin >> n;
    
    rep(i, 9){
        rep(j, 9){
            if((i+1)*(j+1)==n){
                cout << "Yes" << endl; return 0;
            }
        }
    }


    cout << "No" << endl;

    return 0;
}
