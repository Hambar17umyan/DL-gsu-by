#include <fstream>
#include <iostream>
using namespace std;


int main()
{
	//ifstream cin("socidist.in");
	//ifstream cout("socidist.out");
	int i, j, k, l, m, n, o, p;
	cin >> n;
	string s;
	cin >> s;
	k = 0;
	int mx1 = 0;
	int mx2 = 0;
	//48
	int d = 999999;
	for (i = 0; i < n; i++)
	{
		if (s[i] == '0')
		{
			k++;
			continue;
		}
		if (k < d)
		{
			d = k;
		}
		if (k > mx1)
		{
			if (mx1 > mx2)
			{
				mx2 = k;
			}
			else
			{
				mx1 = k;
			}
		}
		else
		{
			if (mx1 > mx2)
			{
				mx2 = k;
			}
			else
			{
				mx1 = k;
			}
		}
	}
	if (max(mx1, mx2) / 3 > min(mx1, mx2) / 2)
	{
		cout << max(mx1, mx2) / 3;
		return 0;
	}
	else if()
	

	return 0;
}