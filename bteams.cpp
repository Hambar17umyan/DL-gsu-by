#include <fstream>
//#include <iostream>
#include <algorithm>
using namespace std;
int arr[14];
int main()
{
	int i, j, k, l, m, n, o, p, w, sum1, sum2, sum3, sum4, sum = 0, mn = 0;
	//
	ifstream cin("bteams.in");
	//
	ofstream cout("bteams.out");
	for (i = 0; i < 12; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	mn = sum;
	for (i = 0; i < 12; i++)
	{
		for (j = i + 1; j < 12; j++)
		{
			for (k = j + 1; k < 12; k++)
			{
				for (l = 0; l < 12; l++)
				{
					if (l == i || l == j || l == k)
					{
						continue;
					}
					for (m = l + 1; m < 12; m++)
					{
						if (m == i || m == j || m == k)
						{
							continue;
						}
						for (n = m + 1; n < 12; n++)
						{
							if (n == i || n == j || n == k)
							{
								continue;
							}
							for (w = 0; w < 12; w++)
							{
								if (w == l || w == m || w == n || w == k || w == i || w == j)
								{
									continue;
								}
								for (o = w + 1; o < 12; o++)
								{
									if (o == l || o == m || o == n || o == k || o == i || o == j)
									{
										continue;
									}
									for (p = o + 1; p < 12; p++)
									{
										if (p == l || p==m || p==n || p==k || p==i || p==j)
										{
											continue;
										}
										sum1 = arr[i] + arr[j] + arr[k];
										sum2 = arr[l] + arr[m] + arr[n];
										sum3 = arr[w] + arr[o] + arr[p];
										sum4 = sum - sum1 - sum2 - sum3;
										if (max(max(sum1, sum2), max(sum3, sum4)) - min(min(sum1, sum2), min(sum3, sum4)) < mn)
										{
											mn = max(max(sum1, sum2), max(sum3, sum4)) - min(min(sum1, sum2), min(sum3, sum4));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << mn;

	return 0;
}
//http://dl.gsu.by/task.jsp?nid=1266401&cid=15