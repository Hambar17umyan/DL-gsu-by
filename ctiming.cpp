//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ifstream cin("ctiming.in");
	//ofstream cout("ctiming.out");
	int i, j, k, l, m, n, d, h;
	cin >> d >> h >> m;
	i = d - 11;
	i *= 24 * 60;
	j = h - 11;
	j *= 60;
	k = m - 11;
	if (k + i + j >= 0)
		cout << k + i + j;
	else cout << -1;

	return 0;
}