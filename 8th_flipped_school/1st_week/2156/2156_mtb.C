#include <iostream>
using namespace std;
const int N = 10000;
int p[N+1];
int d[N+1];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i];
    d[1] = p[1];
    d[2] = p[1] + p[2];
    for (int i = 3; i <= n; i++)
    {   
        d[i] = max(p[i-1]+p[i]+d[i-3], max(p[i]+d[i-2], d[i-1]));
    }   
    cout << d[n] << "\n";

    return 0;
}
