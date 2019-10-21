#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int data[50][50];

    rep(i, n){
        rep(j, d){
            cin >> data[i][j];
        }
    }
    int ans = 0;
    rep(i, n){
        for(int j = i+1; j < n; j++){
            double sum = 0;
            for(int k = 0; k < d; k++){
                sum += pow(data[i][k]-data[j][k], 2.0);
            }
            sum = sqrt(sum);

            if(floor(sum)==sum)ans++;

        }
    }

    cout << ans << endl;

    return 0;
}
