#include <bits/stdc++.h>
using namespace std;

int N;
int XS[1000];
int DP[1001];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> XS[i];

    memset(DP, 0, sizeof(DP));

    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; ++j) {
            DP[j] = max(DP[j], DP[j - i] + XS[i - 1]);
        }
    }

    cout << DP[N] << '\n';

    return 0;
}
