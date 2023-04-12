#include <iostream>
#include <algorithm>
using namespace std;

long long a[21], b[21], resb[21];
int main()
{
	long long i, j, l, m, n, o, p, x, y, z = 0, k = 0, sum = 1;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n && a[j] <= b[i]; j++)
		{
			resb[i]++;
		}
	}
	for (i = 0, k = 0; i < n; i++, k++)
	{
		sum *= resb[i] - k;
	}
	cout << sum;

	return 0;
}