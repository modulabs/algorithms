#include <iostream>
using namespace std;
const int N = 1000;
int a[N+1];
int d[N+1];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        d[i] = 1;
        for (int j = i-1; j > 0; j--)
        {
            if (a[i]>a[j] && d[i]<=d[j])
            {
                d[i] = d[j] + 1;
            }
        }
    }
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (ans < d[i]) ans = d[i];
    }
    cout << ans << "\n";

    return 0;
}
