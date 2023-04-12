#include <fstream>
//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//	ifstream cin("sym.in");
	//	ofstream cout("sym.out");
	int n, m, i, j=1;
	cin >> n >> m;
	int k = min(n, m);
	int t=0;
	while (k > 3)
	{
		k /= 4;
		t++;
	}
	k = pow(4, t);
	j = k * k + (k - 1) * (k - 1);
	if ((n * m) % 2 == 0)
	{
		cout << 0;
	}
	else
		cout << j;

	return 0;
}
