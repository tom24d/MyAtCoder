#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef unsigned long long ll;

int main(){
    int n, m;
    cin >> n >> m;

    int a[100002];
    rep(i, 100002)a[i] = 0;

    rep(i, m){
        int p;
        string s;
        cin >> p >> s;

    if(s == "AC"){
        if(a[p] < 0){
            //do nothing
        }else{
            a[p]++;
            a[p] = -a[p];
        }
    }else{
        if (a[p] < 0)
        {       
            /* do nothing */
        }else{
            a[p]++;
        }
        
    }
        
    }

    int ans1 = 0;
    int ans2 = 0;

    for (int i = 1; i <= n; i++)
    {
        int wa=0, ac=0;

        if(a[i] > 0){
        }else if(a[i]==0){
        }else{
            wa = -(a[i]+1);
            ac = 1;
        }

        ans1 += ac;
        ans2 += wa;
    }
        cout << ans1 << " " << ans2 << endl;
        return 0;
}
