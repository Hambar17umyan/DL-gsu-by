#include <fstream>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int i, j, k, l, m, n, o, p;
	cin >> n;
	int t = 0;
	o = n;
	p = n;
	for (t = 0; t <= 10000; t++)
	{
		int a = 0, b = 0, c = 0, d;
		d = n % 10;
		if (n > 9)
		{
			c = (n / 10) % 10;
		}
		if (n > 99)
		{
			b = (n / 100) % 10;
		}
		if (n > 999)
		{
			a = n / 1000;
		}

	}
	cout << t;

	return 0;
}