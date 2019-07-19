#include <iostream>
using namespace std;
const int N = 100000;
const int M = 3;
const int mod = 1000000009;
long long d[N+1][M+1];
int main()
{
    d[1][1] = 1;
    d[2][2] = 1;
    d[3][1] = 1;
    d[3][2] = 1;
    d[3][3] = 1;
    for (int i = 4; i <= N; i++)
    {
        d[i][1] = d[i-1][2] + d[i-1][3];
        d[i][2] = d[i-2][1] + d[i-2][3];
        d[i][3] = d[i-3][1] + d[i-3][2];
        d[i][1] %= mod;
        d[i][2] %= mod;
        d[i][3] %= mod;
    }
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << (d[n][1] + d[n][2] + d[n][3])%mod << "\n";
    }

    return 0;
}
