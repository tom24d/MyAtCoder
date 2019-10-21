#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;


int main() {
    int n;
    cin >> n;
    int tired[1002];
    int index[1002];
    int data[1002][1002];

    rep(i, n)tired[i]=false;
    rep(i, n)index[i]=0;

    rep(i, n){
        rep(j, n-1){
            int temp;
            cin >> temp;
            data[i][j] = temp - 1;
        }
    }

    int ans = 0;

    while(true){
        ans++;
        bool fight = false;

        rep(i, n)tired[i]=false;

        rep(i, n){
            if((!tired[i])&&index[i]!=n-1){
                int pair = data[i][index[i]];
                if(data[pair][index[pair]]==i&&!tired[pair]){
                    tired[i] = true;
                    tired[pair] = true;
                    index[i]++;
                    index[pair]++;
                    fight=true;
                    // cout << i << " vs " << pair << endl;
                }
            }
        }

        bool finished = true;

        //全員試合が終わったら終了
        rep(i, n){
            if(index[i]!=n-1){
                finished=false;
            };
        }

        if(finished){
            cout << ans << endl;
            return 0;
        }

        //試合できなかったら
        if(!fight){
            ans = -1;
            break;
        }

        // cout << "day:" << ans << " finished" << endl;

    }

    cout << ans << endl;

    return 0;
}
