#include <iostream>
using namespace std;
const int N = 1000000;
int d[N+1];
int main()
{
    int n; cin >> n;
    d[2] = d[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        d[i] = d[i-1]+1;
        if (i%2==0 && d[i] > d[i/2]+1)
        {
            d[i] = d[i/2]+1;
        }
        if (i%3==0 && d[i] > d[i/3]+1)
        {
            d[i] = d[i/3]+1;
        }
    }
    cout << d[n] << "\n";

    return 0;
}
