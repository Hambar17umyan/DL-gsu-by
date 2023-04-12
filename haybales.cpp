//#include <iostream>
#include <fstream>
using namespace std;

int arr[10002];
int main()
{
	//
	ifstream cin("haybales.in");
	//
	ofstream cout("haybales.out");
	int i, j, k = 0, l, m = 0, n, o, p;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		k += arr[i];
	}
	k /= n;
	for (i = 0; i < n; i++)
	{
		if (arr[i] < k)
		{
			m += k - arr[i];
		}
	}
	cout << m;

	return 0;
}