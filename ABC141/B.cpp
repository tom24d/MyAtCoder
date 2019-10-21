#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    string data;

    cin >> data;

    int n = data.size();

    bool ans = true;

    rep(i, n){

        if(i%2==0){
            if(data.at(i)=='L'){
                    ans = false;
            }
        }else{
                if(data.at(i)=='R'){
                    ans = false;
                }
        }
    }

    cout << (ans? "Yes" : "No") << endl;

    return 0;
}
