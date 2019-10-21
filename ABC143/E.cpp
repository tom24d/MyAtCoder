
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n); i++)
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;

int cities[301];
vector<pair<int, int>> table[301];

void BFS(queue<int> q){

    // cout << "BFS call" << endl;
    if(q.empty())return;

    queue<int> newq;

    while(!q.empty()){
        int v = q.front(); q.pop();
        if(cities[v] == -1){
            continue;
        }
        for(int i = 0; i < table[v].size(); i++){
            int weight = table[v][i].second;
            int next = table[v][i].first;
            if(weight>=0){
                if(cities[next]==-1){
                cities[next] = cities[v] + 1;
                newq.push(next);
                }else if(cities[next]!=-1&&cities[next]>cities[v]+1){
                    cities[next] = cities[v] + 1;
                    newq.push(next);
                }
            }
        }
    }

    if(newq.empty())return;

    BFS(newq);

    return;
}

int main() {
    
    int n, m, l, q;
    cin >> n >> m >> l;
    int inf = -1;
    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        table[a].push_back(make_pair(b, l-c));
        table[b].push_back(make_pair(a, l-c));
    }
    cin >> q;
    vector<pair<int, int>> query(q);
    rep(i, q){
        int s, t;
        cin >> s >> t;
        query[i] = make_pair(s, t);
    }
    rep(i, q){
        std::fill_n(cities, 301, -1);
        queue<int> queue;
        queue.push(query.at(i).second);
        cities[query.at(i).second] = 0;
        BFS(queue);
        cout << cities[query.at(i).first] << endl;
    }

    return 0;
}
