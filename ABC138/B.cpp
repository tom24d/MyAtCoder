#include <bits/stdc++.h>

using namespace std;


int main() {
    int N;
    cin >> N;
    vector<double> nn(N);
    for(int i=0; i<N; i++)cin >> nn.at(i);

    double sum = 0;

    for(int i=0; i<N; i++)sum += 1/nn.at(i);
    printf("%.6lf\n", 1/sum);

    return 0;
}
