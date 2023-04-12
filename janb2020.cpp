#include <iostream>
typedef bool status;
using namespace std;

int main()
{
	int i, j, k, l, m, n;
	int e = 0, o = 0;
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> k;
		e += (k % 2 + 1) % 2;
		o += (k % 2);
	}
	m = 0;
	for (i = 0; ; i++)
	{
		if (!o && i % 2)
		{
			break;
		}
		if (!(i % 2))
		{
			if (e)
			{
				e--;
				m++;
				//cout << "1z" << '\n';
				continue;
			}
			o -= 2;
			m++;
			//cout << "2k" << endl;
			continue;
		}
		if (!e)
		{
			if (o == 2)
			{
				//cout << "swap k\n";
				break;
			}
			if (o == 1)
			{
				//cout << "3 or 1 k\n";
				m++;
				break;
			}
		}
		o--;
		//cout << "1k\n";
		m++;
		if (!(o || e))
		{
			break;
		}
	}
	cout << m;

	return 0;
}