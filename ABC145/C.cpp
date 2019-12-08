#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef unsigned long long ll;

vector<pair<int, int>> xy;

double getDistance(int a, int b){
    return hypot((double)(xy[a].first - xy[b].first), (double)(xy[a].second - xy[b].second));
}

double dfs(vector<int> nodes, int next){

    int nextNode = nodes[next];

    nodes.erase(nodes.begin()+next);

    double temp = 0;

    rep(i, sz(nodes)){
        temp += getDistance(nodes[i], nextNode);
        temp+=dfs(nodes, i);
    }

    if(sz(nodes)==0)return 0;

    temp = temp / (double)sz(nodes);
    return temp;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> xytemp(n);
    rep(i, n){
        int x,y;
        cin >> x >> y;
        xytemp[i]=make_pair(x,y);
    }
    xy=xytemp;

    double temp = 0;
    vector<int> nds(n);
    rep(i,n){
        nds[i]=i;
    }
    rep(i, n){
        temp += dfs(nds, i);
    }

    cout << printf("%.7f", temp/(double)n) << endl;
}
