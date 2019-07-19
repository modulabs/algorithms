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
        d[i] = a[i];
        for (int j = i-1; j > 0; j--)
        {   
            if (a[i] > a[j] && d[i] < d[j]+a[i])
            {   
                d[i] = d[j]+a[i];
            }   
        }   
    }   
    int max_sum = d[1];
    for (int i = 2; i <= n; i++)
    {   
        if (max_sum < d[i])
        {   
            max_sum = d[i];
        }   
    }   
    cout << max_sum << "\n";

    return 0;
}
