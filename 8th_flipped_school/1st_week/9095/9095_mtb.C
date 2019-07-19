#include <iostream>
using namespace std;
const int N = 11; 
int d[N];
int main()
{
    int t; cin >> t;
    d[0] = d[1] = 1;
    d[2] = 2;
    for (int i = 3; i < N; i++)
    {   
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }   
    while (t--)
    {   
        int n; cin >> n;
        cout << d[n] << "\n";
    }   

    return 0;
}
