#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (b==0) return a;
    return GCD(b, a%b);
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long ans = 0;
        int n; cin >> n;
        int number[100];
        for (int i = 0; i < n; i++)
        {
            cin >> number[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                ans += GCD(number[i], number[j]);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
