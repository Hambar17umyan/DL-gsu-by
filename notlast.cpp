#include <fstream>
#include <algorithm>
//#include <iostream>

using namespace std;

struct cow 
{
	int s;
	string n;
};
cow arr[8];//Bessie, Elsie, Daisy, Gertie, Annabelle, Maggie, Henrietta
bool operator<(const cow& a, const cow& b)
{
	return a.s > b.s;
}
int main()
{
	//
	ifstream cin("notlast.in");
	//
	ofstream cout("notlast.out");
	int i, j, n, m;
	cin >> n;
	string s;
	for (i = 0; i < 7; i++)
	{
		arr[i].s = 0;
	}
	arr[0].n = "Bessie";
	arr[1].n = "Elsie";
	arr[2].n = "Daisy";
	arr[3].n = "Gertie";
	arr[4].n = "Annabelle";
	arr[5].n = "Maggie";
	arr[6].n = "Henrietta";

	for (i = 0; i < n; i++)
	{
		cin >> s >> m;
		if (s[0] == 'B')
			arr[0].s+= m;
		else if (s[0] == 'E')
			arr[1].s+= m;
		else if (s[0] == 'D')
			arr[2].s+= m;
		else if (s[0] == 'G')
			arr[3].s+= m;
		else if (s[0] == 'A')
			arr[4].s+= m;
		else if (s[0] == 'M')
			arr[5].s+= m;
		else if (s[0] == 'H')
			arr[6].s+=m;
	}
	sort(arr, arr + 7);
	int k = 0, ind;
	j = 0;
	/*for (i = 0; i < 7; i++)
	{
		cout << arr[i].n << ' ' << arr[i].s<<endl;
	}*/
	for (i = 5; i >= 0; i--)
	{
		if (arr[i].s > arr[i + 1].s)
		{
			if (i > 0)
			{
				if (arr[i].s < arr[i - 1].s)
				{
					k = 1;
					ind = i;
				}
			}
			else {
				k = 1;
				ind = 0;
			}

			break;
		}
	}
	if (k == 0)
	{
		cout << "Tie";
	}
	else cout << arr[ind].n;

	return 0;
}