#include <iostream>
using namespace std;
const int N = 100;
const int M = 10; 
const int mod = 1000000000;
long long d[N+1][M+1];
int main()
{
    int n; cin >> n;
    for (int j = 1; j <= 9; j++) d[1][j] = 1;
    for (int j = 2; j <= 8; j++) d[2][j] = 2;
    d[2][0] = 1;
    d[2][1] = 1;
    d[2][9] = 1;
    for (int i = 3; i <= n; i++)
    {   
        d[i][0] = d[i-1][1]%mod;
        d[i][9] = d[i-1][8]%mod;
        for (int j = 1; j <= 8; j++)
        {   
            d[i][j] = (d[i-1][j-1]%mod + d[i-1][j+1]%mod)%mod;
        }   
    }   
    long long ans = 0;
    for (int j = 0; j <= 9; j++)
    {   
        ans += d[n][j];
        ans %= mod;
    }   
    cout << ans << "\n";

    return 0;
}
