#include <iostream>
#include <fstream>

using  namespace std;

int arr[12][12];
int main()
{
	int n, m, k, i, j;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int a[102];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			a[j] = arr[i][j];
		}
		int k1 = -1;
		for (int t = 0; t < k; t++)
		{
			if (t % k1 == 0)
			{
				k1++;
			}
			cout
		}
	}

	return 0;
}