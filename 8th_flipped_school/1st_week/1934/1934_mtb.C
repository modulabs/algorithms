#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (b==0)
    {   
        return a;
    }   
    return GCD(b, a%b);
}
int main()
{
    int t; cin >> t;
    while (t--)
    {   
        int a, b; cin >> a >> b;
        cout << a*b/GCD(a, b) << "\n";
    }   

    return 0;
}
