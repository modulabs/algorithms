#include <iostream>
using namespace std;
const int N = 100000;
const int M = 3;
long long d[N+1][M];
long long p[N+1][M];
int main()
{
    int t; cin >> t;
    while (t--)
    {   
        int n; cin >> n;
        for (int i = 1; i <= n; i++) cin >> p[i][1];
        for (int i = 1; i <= n; i++) cin >> p[i][2];
        d[1][1] = p[1][1];
        d[1][2] = p[1][2];
        for (int i = 2; i <= n; i++)
        {   
            d[i][0] = max(d[i-1][1], d[i-1][2]);
            d[i][1] = max(d[i-2][1], max(d[i-2][2], d[i-1][2])) + p[i][1];
            d[i][2] = max(d[i-2][1], max(d[i-2][2], d[i-1][1])) + p[i][2];
        }   
        cout << max(d[n][0], max(d[n][1], d[n][2])) << "\n";
    }   

    return 0;
}
