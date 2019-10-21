#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    cin >> s >> t;
    int j=0, rem=s.size()-1;
    ll prefix=0;

    for(int i=0;i<t.size();i++){
        while(true){
       // cout << "i:" << i << " j:" << j << endl;

            if(t[i]==s[j]){
          //      cout << t[i] << " is included in " << j << endl;
                j++;
                prefix++;
                if(j==s.size())j=0;
                rem = j-1;
                break;
            }
        
        
            if(rem==j){
                cout << -1 << endl;
                return 0;
            }
            j++;
            prefix++;
            if(j==s.size())j=0;
            
        }

        if(i==t.size()-1)break;
    }

    cout << prefix << endl;

    return 0;
}
