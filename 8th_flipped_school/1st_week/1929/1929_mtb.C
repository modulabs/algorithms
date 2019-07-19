#include <iostream>
using namespace std;
const int N = 1000000;
bool check[N+1];
int main()
{
    int m, n; cin >> m >> n;
    check[1] = true;
    for (int i = 2; i <= n; i++)
    {   
        if (!check[i])
        {   
            if (i>=m)
            {   
                cout << i << "\n";
            }   
            for (int j = 1; i*j<=n; j++)
            {   
                check[i*j] = true;
            }   
        }   
    }   

    return 0;
}
