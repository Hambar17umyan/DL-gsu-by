#include <iostream>
using namespace std;
typedef string word;
#define aa cin>>f;

int status[28]; //levels
string hh[28]; //years
/// ////////////////
int ff(string arr[]/*arr*/, int n/*length of arr*/, string s/*string on interest*/)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == s)
		{
			return i;
		}
	}
}
////////////////////////
string year[14] =
{
	"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"
};//year names
/////////////////////
int main()
{
	int i, j, k, l, m, n, o, p;
	cin >> n;
	status['B' - 65] = 0;
	for (i = 0; i < n; i++)
	{
		string n1, n2, t, f, h;
		cin >> n1; //current name
		aa
			aa
			cin >> t; //previous or next
		cin >> h; //current year
		aa
			aa
			cin >> n2; // friend name
		hh[n1[0] - 65] = h; //register the year of current
		if (t[0] == 'p') //previous
		{
			int a = status[n2[0] - 65]; //level of friend
			int b = ff(year, n, hh[n2[0] - 65]) - ff(year, n, h); //how mush is the current younger then friend
			if (b <= 0)
			{
				b = 12 + b;
			}
			status[n1[0] - 65] = a - b;
			continue;
		}
		else
		{
			int a = status[n2[0] - 65];
			int b = ff(year, n, h) - ff(year, n, hh[n2[0] - 65]);
			if (b <= 0)
			{
				b = 12 + b;
			}
			status[n1[0] - 65] = a + b;
			continue;
		}
	}
	cout << abs(status['B' - 65] - status['E' - 65]);
	/*for (i = 0; i < 26; i++)
	{
		cout << '\n';
		cout << status[i];
		cout << ' ' << char(i + 65);
	}*/

	return 0;
}