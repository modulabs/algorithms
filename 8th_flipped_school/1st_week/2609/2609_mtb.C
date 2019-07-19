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
    int a, b; cin >> a >> b;
    int gcd = GCD(a, b); 
    cout << gcd << "\n";
    cout << a*b/gcd << "\n";

    return 0;
}
