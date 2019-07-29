#include <iostream>
#include <algorithm>
using namespace std;
const int N = 9;
int main()
{
	int sum = 0;
	int height[N];
	for (int i = 0; i < N; i++) 
	{
		cin >> height[i];
		sum += height[i];
	}
	sort(height, height+N);
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (sum-height[i]-height[j]==100)
			{
				for (int k = 0; k < N; k++)
				{
					if (k != i && k != j)
					{
						cout << height[k] << "\n";
					}
				}
				return 0;
			}
		}
	}
	return 0;
}
