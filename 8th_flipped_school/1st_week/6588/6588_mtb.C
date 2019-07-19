#include <iostream>
using namespace std;
const int N = 1000000;
bool check[N+1];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    check[1] = true;
    for (int i = 2; i < N; i++)
    {   
        if (!check[i])
        {   
            for (int j = 2; i*j < N; j++)
            {   
                check[i*j] = true;
            }   
        }   
    }   
    while (1) 
    {   
        int n; cin >> n;
        if (n==0) return 0;
        for (int i = 3; i < n; i+=2)
        {   
            if (!check[i]&&!check[n-i])
            {   
                cout << n << " = " << i << " + " << n-i << "\n";
                break;
            }   
        }   
    }   

    return 0;
}
