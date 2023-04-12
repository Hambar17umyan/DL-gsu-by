#include <fstream>
#include <iostream>
using namespace std;

int m, n, r = 1000000, x1, y1;
int k = 0;
char arr[152][152];
void rec(int i, int j)
{
	if (i + 2 < n)
	{
		if (j + 1 < m)
		{
			if (arr[i + 2][j + 1] == 'K')
			{
				if (k < r)
				{
					r = k;
				}
			}
			else {
				k++;
				rec(i + 2, j + 1);
			}
		}
		if (j - 1 >= 0)
		{
			if (arr[i + 2][j - 1] == 'K')
			{
				if (k < r)
				{
					r = k;
				}
			}
			else {
				k++;
				rec(i + 2, j + 1);
			}
		}
	}
	if (i - 2 >= 0)
	{
		if (j + 1 < m)
		{
			if (arr[i - 2][j + 1] == 'K')
			{
				if (k < r)
				{
					r = k;
				}
			}
			else {
				k++;
				rec(i + 2, j + 1);
			}
		}
		if (j - 1 >= 0)
		{
			if (arr[i + 2][j - 1] == 'K')
			{
				if (k < r)
				{
					r = k;
				}
			}
			else {
				k++;
				rec(i + 2, j + 1);
			}
		}
	}
}
int main()
{
	int i, j, x2, y2;
	cin >> n >> m;
	for (i = m; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	rec(x2, y2);

	return 0;
}