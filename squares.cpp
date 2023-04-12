#include <fstream>
//#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//
	ifstream cin("squares.in");
	//
	ofstream cout("squares.out");

	int n, i, j, k1, k2, sum = 0;
	cin >> n;
	for (i = 1; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if ((n / i + i) % 2 == 0)
			{
				sum++;
			}
		}
	}
	cout << sum;

	return 0;
}
//http://dl.gsu.by/task.jsp?nid=187059&cid=15