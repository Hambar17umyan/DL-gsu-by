#include <iostream>
#include <fstream>
using namespace std;

int arr[755][755] = { {-1, -1 } };
int main()
{
	//
	ifstream cin("spiral.in");
	//
	ofstream cout("spiral.out");
	int i, j, k, l, m, n, o, p, u, n1, n2;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = 0;
		}
	}
	k = 1;
	i = 0;
	j = 0;
	int b1 = 1, b2 = 1;
	n1 = n;
	n2 = n;
	while (k <= n * n)
	{
		arr[i][j] = k;
		if (b1 == 1)
		{
			if (arr[i][j + 1] != 0 || j + 1 == n)
			{
				b1 = 2;
				i += 1;
			}
			else
			{
				j += 1;
			}
		}
		else if (b1 == 2)
		{
			if (arr[i + 1][j] != 0 || i + 1 == n)
			{
				b1 = 3;
				j -= 1;
			}
			else
			{
				i += 1;
			}
		}
		else if (b1 == 3)
		{
			if (j - 1 == -1)
			{
				b1 = 4;
				i -= 1;
			}
			else if (arr[i][j - 1] != 0)
			{
				b1 = 4;
				i -= 1;
			}
			else
			{
				j -= 1;
			}
		}
		else if (b1 == 4)
		{
			if (i - 1 == -1)
			{
				b1 = 1;
				j += 1;
			}
			else if (arr[i - 1][j] != 0)
			{
				b1 = 1;
				j += 1;
			}
			else
			{
				i -= 1;
			}
		}
		k++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}