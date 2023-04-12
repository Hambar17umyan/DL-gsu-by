#include <fstream>
using namespace std;

string sub(string s, int st, int f)
{
	string res;
	for (int i = st; i <= f; i++)
	{
		res += s[i];
	}
	return res;
}
string f(int n, string s)
{
	string k, s1;
	s1 = sub(s, n, s.size() - 1);

	return s1;
}

int main()
{
	int t;
	ifstream cin("stringe.in");
	ofstream cout("stringe.out");
	cin >> t;
	while (t--)
	{
		string s;
		int i, j, l, m, n, o;
		cin >> n >> m >> s;
		for (i = 0; i < m; i++)
		{
			s = f(n, s) + s;
		}
		cout << s << endl;
	}

	return 0;
}