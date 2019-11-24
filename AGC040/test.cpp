#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;


int main() {
    int N, t1, t2;
    cin >> N;
    vector<double> nn(N);
    for(int i=0; i<N; i++)cin >> nn.at(i);

    nn.pop_back();
    nn.pop_back();
    nn.push_back(7);
    cout << nn.at(0) << endl;

    return 0;
}
