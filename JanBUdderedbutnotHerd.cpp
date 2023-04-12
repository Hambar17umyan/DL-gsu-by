#include <iostream>
using namespace std;
//abcdefghijklmnopqrstuvwxyz
//mood
int main()
{
	int i = 0, j, k, l, m, n, o, p, x, y, z, t, tl, sum = 0;
	bool b = 1;
	string s1, s2, s3;
	cin >> s1 >> s2;
	s3 = s2;
	while (b == 1)
	{
		sum++;
		for (j = 0; j < 26; j++)
		{
			if (s1[j] == s2[i])
			{
				if (i == s2.size() - 1)
				{
					b = 0;
					break;
				}

				i++;
			}
		}
	}

	cout << sum;

	return 0;
}