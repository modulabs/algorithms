#include <iostream>
using namespace std;
const int N = 100000;
int p[N+1];
int d1[N+1];
int d2[N+1];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++)
    {   
        d1[i] = max(p[i], p[i]+d1[i-1]);
		d2[n-i+1] = max(p[n-i+1], p[n-i+1]+d2[n-i+2]);
    }
    int ans = p[1];
    for (int i = 2; i <= n; i++)
    {   
        ans = max(ans, max(d1[i], d1[i-2]+d2[i]));
    }   
    cout << ans << "\n";

    return 0;
}
