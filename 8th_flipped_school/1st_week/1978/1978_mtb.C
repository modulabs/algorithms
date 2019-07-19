#include <iostream>
using namespace std;
bool is_primary(int number)
{
    if (number==1) return false;
    for (int i = 2; i < number; i++)
    {   
        if (number%i==0)
        {   
            return false;
        }   
    }   
    return true;
}
int main()
{
    int ans = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {   
        int number; cin >> number;
        if (is_primary(number))
        {   
            ans++;
        }   
    }   
    cout << ans << "\n";

    return 0;
}
