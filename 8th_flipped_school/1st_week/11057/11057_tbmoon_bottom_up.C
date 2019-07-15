#include <iostream>
using namespace std;
const int N = 1000;
const int M = 10; 
const int mod = 10007;
int d[N+1][M];
int main()
{
    int n; cin >> n;
    for (int j = 0; j < M; j++) d[1][j] = 1;
    for (int i = 2; i <= n; i++)
    {   
        for (int j = 0; j < M; j++)
        {   
            for (int k = 0; k <= j; k++)
            {   
                d[i][j] += d[i-1][k]%mod;
            }   
            d[i][j] %= mod;
        }   
    }   
    int ans = 0;
    for (int j = 0; j < M; j++) ans += d[n][j]%mod;
    cout << ans%mod << "\n";

    return 0;
}
