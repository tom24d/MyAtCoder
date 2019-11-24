#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s == "SUN"){
        cout << 7 << endl;
        return 0;
    }

    if(s == "MON"){
        cout << 6 << endl;
        return 0;
    }

    if(s == "TUE"){
        cout << 5 << endl;
        return 0;
    }

    if(s == "WED"){
        cout << 4 << endl;
        return 0;
    }

    if(s == "THU"){
        cout << 3 << endl;
        return 0;
    }

    if(s == "FRI"){
        cout << 2 << endl;
        return 0;
    }

    if(s == "SAT"){
        cout << 1 << endl;
        return 0;
    }

    return 0;
}
