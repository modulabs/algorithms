#include <iostream>
using namespace std;
const int N = 1000;
int a[N+1];
int d1[N+1]; // left to right LIS
int d2[N+1]; // right to left LIS
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    // left to right LIS
    for (int i = 1; i <= n; i++)
    {   
        d1[i] = 1;
        for (int j = i-1; j > 0; j--)
        {   
            if (a[i] > a[j])
            {   
                d1[i] = max(d1[i], d1[j]+1);
            }   
        }   
    }   
    // right to left LIS
    for (int i = N; i >= 1; i--)
    {   
        d2[i] = 1;
        for (int j = i+1; j <= n; j++)
        {   
            if (a[i] > a[j])
            {   
                d2[i] = max(d2[i], d2[j]+1);
            }   
        }
    }

    int max_len = 1;
    for (int i = 2; i <= n; i++)
    {
        max_len = max(max_len, d1[i]+d2[i]-1);
    }
    cout << max_len << "\n";

    return 0;
}
