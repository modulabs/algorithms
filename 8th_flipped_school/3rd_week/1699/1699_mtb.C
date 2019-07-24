#include <iostream>
using namespace std;
const int N = 100000;
int d[N+1];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
		d[i] = i;
		for (int j = 1; j*j < i; j++)
		{
			d[i] = min(d[i], d[i-j*j]+1);
		} 
    }   
    cout << d[n] << "\n";

    return 0;
}
