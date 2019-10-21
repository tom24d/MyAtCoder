#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int nn = (int)pow(2, n);
    vector<int> s(nn);
    rep(i, nn) cin >> s[i];

    sort(s.begin(), s.end());

    int head_i = 0;
    int end_i = nn-1;

    rep(i, n){
        if(head_i==end_i){break;}

        int middle=(end_i+1+head_i)/2;

        // cout << "middle: " << middle << endl;

        for(int m = head_i; m<middle+(end_i-middle+1)/2; m++){
            if(s[m]>=s[m+end_i-middle+1]){
                cout << "No" << endl;;
                // cout << "m: " << m << endl;
                return 0;
            }
            // cout << "m: " << m << " passed" << endl;
        } 
        head_i=middle;
    }

    cout << "Yes" << endl;

    return 0;
}
