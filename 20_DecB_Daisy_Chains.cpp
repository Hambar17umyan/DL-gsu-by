#include <iostream>
#include <set> 
using namespace std;

int arr[1002];

int main()
{
	int i, j, k, l, m, n, o, p, x, y, z, sum=0;
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = i ; j < n; j++)
		{
			z = 0;
			set<int>st;
			for (k = i; k <= j; k++)
			{
				z += arr[k];
				st.insert(arr[k]);
			}
			if (i == j)
				sum++;
			else
			{
				if (z % (j - (i - 1)) == 0)
				{
					if (st.find(z / (j - (i - 1))) != st.end())
					{
						sum++;
					}
				}
			}
		}
	}
	cout << sum;

	return 0;
}
//4
//1 1 2 3
//http://dl.gsu.by/task.jsp?nid=1999826&cid=15