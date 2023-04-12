#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;

int gr[200002], by[200002];
int main()
{
	int i, j, k, l, m, n, o, p, x, y, z, a, b, sum=0;
	int t, tl;
	cin >> t;
	for (tl = 0; tl < t; tl++)
	{
		sum = 0;
		cin >> a >> b >> k;
		for (i = 0; i < k; i++)
		{
			cin >> by[i];
		}
		for (i = 0; i < k; i++)
		{
			cin >> gr[i];
		}
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (by[i] != by[j] && gr[i] != by[j])
				{
					sum++;
				}
			}
		}
		cout << sum / 2 << '\n';
	}

	return 0;
}