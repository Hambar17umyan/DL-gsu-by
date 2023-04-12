#include <iostream>
#include <fstream>
using namespace std;

int arr[102][102];
int n, m;
int r = 0;
void rec(int i, int j)
{
	r += arr[i][j];
	int a = arr[i - 1][j - 1];
	int b = arr[i][j - 1];
	int c = arr[i + 1][j - 1];
}
int main()
{
	//ifstream cin("pie1.in");
	//ofstream cout("pie1.out");
	int i, j;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	rec(n - 1, m - 1);
	cout << r;

	return 0;
}