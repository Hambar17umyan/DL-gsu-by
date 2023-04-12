#include <iostream>
using namespace std;

int main()
{
	int i, j, k, l, m, n, o, p, q, w, x, z, y, sumk = 0, sumz = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> m;
		if (m % 2 == 0)
		{
			sumz++;
		}
		else sumk++;
	}
	//cout << '\n' << sumz << ' ' << sumk;
	if (sumz == sumk)
	{
		cout << n;
	}
	else if (sumz > sumk)
	{
		cout << sumk * 2 + 1;
	}
	else
	{
		if ((sumk - sumz) % 3 == 0)
		{
			cout << (sumk - sumz) / 3 * 2 + sumz * 2;
		}
		else if ((sumk - sumz) % 3 == 1)
		{
			cout << (sumk - sumz) / 3 * 2 - 1 + sumz * 2;
		}
		else
		{
			cout << (sumk - sumz) / 3 * 2 + 1 + sumz * 2;
		}
	}

	return 0;
}