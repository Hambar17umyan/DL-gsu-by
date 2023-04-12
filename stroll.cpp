#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

char arr[32][32];
int r = 0;
void rec(int x1, int y1, int x, int y)
{
	if (x + 1 <= x1)
	{
		if (arr[x + 1][y] != 'R')
		{
			if (arr[x + 1][y] == 'B')
			{
				r++;
			}
			else
			{
				rec(x1, y1, x + 1, y);
			}
		}
	}
	if (y + 1 <= y1)
	{
		if (arr[x][y + 1] != 'R')
		{
			if (arr[x][y + 1] == 'B')
			{
				r++;
			}
			else
			{
				rec(x1, y1, x, y + 1);
			}
		}
	}
}

int  main()
{
	int i, j, k, l, o, p;
	//
	ifstream cin("stroll.in");
	//
	ofstream cout("stroll.out");
	bool b = false;
	int n, m;
	cin >> n >> m;
	int x1=0, y1=0, x2=0, y2=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'B')
			{
				if (b == 0)
				{
					b = 1;
					x1 = i;
					y1 = j;
				}
				else
				{
					x2 = i;
					y2 = j;
				}
			}
		}
	}
	rec(x2, y2, x1, y1);
	cout << r;

	return 0;
}