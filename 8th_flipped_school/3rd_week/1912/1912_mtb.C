#include <iostream>
using namespace std;
const int N = 100000;
int p[N+1];
int d[N+1];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++)
    {   
        d[i] = max(p[i], p[i]+d[i-1]);
    }   
    int ans = p[1];
    for (int i = 2; i <= n; i++)
    {   
        ans = max(ans, d[i]);
    }   
    cout << ans << "\n";

    return 0;
}
