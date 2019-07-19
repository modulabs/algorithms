#include <iostream>
using namespace std;
const int N = 1000;
const int mod = 10007;
int d[N+1];
int main()
{
    int n; cin >> n;
    d[0] = d[1] = 1;
    for (int i = 2; i <= n; i++)
    {   
        d[i] = d[i-1]+d[i-2];
        d[i] %= mod;
    }   
    cout << d[n] << "\n";

    return 0;
}
