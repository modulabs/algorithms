#include <iostream>
using namespace std;
const int N = 1000;
int p[N+1];
int d[N+1];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++)
    {   
        d[i] = p[i];
        for (int j = i-1; j > 0; j--)
        {   
            d[i] = min(d[i], d[j] + p[i-j]);
        }   
    }   
    cout << d[n] << "\n";

    return 0;
}
