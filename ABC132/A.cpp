#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    string s;
    cin >> s;
    char c1 = s.at(0);
    if(s.at(0)==s.at(1)&&s.at(0)==s.at(2)&&s.at(0)==s.at(3)){
        cout << "No" << endl; return 0;
    }
    if(c1==s.at(1)){
        if(s.at(2)==s.at(3)){
            cout << "Yes" << endl; return 0;
        }else{
            cout << "No" << endl; return 0;            
        }
    }else{
        if(c1==s.at(2)){
            if(s.at(1)==s.at(3)){
            cout << "Yes" << endl; return 0;
            }else{
            cout << "No" << endl; return 0;
            }
        }else if(c1==s.at(3)){
            if(s.at(1)==s.at(2)){
            cout << "Yes" << endl; return 0;
            }else{
            cout << "No" << endl; return 0;
            }
        }
    }

            cout << "No" << endl; return 0;

}
