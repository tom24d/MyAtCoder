#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<double> nn(N);
    double t1, t2;
    for(int i=0; i<N; i++)cin >> nn.at(i);

    sort(nn.begin(), nn.end());
    reverse(nn.begin(), nn.end());

    for(int i=N-1; i!=0; i--){
        t1 = nn[i];
        t2 = nn[i-1];
        nn.pop_back();
        nn.pop_back();
        nn.push_back((t1 + t2)/2.0);

    }
    printf("%.10f\n", nn.at(0));

    return 0;
}
