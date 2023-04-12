#include <fstream>
#include <algorithm>
//#include <iostream>
using namespace std;

int main()
{
	//
	ifstream cin("commas.in");
	//
	ofstream cout("commas.out");
	int n, i, j, k;
	string res, s;
	cin >> s;
	if (s.size() % 3 == 1)
	{
		res += s[0];
		if (0 != s.size() - 1) {
			res += ',';
		}
		for (i = 1; i < s.size(); i++)
		{
			res += s[i];
			if (i % 3 == 0 && i != s.size() - 1)
			{
				res += ',';
			}
		}
	}
	else if (s.size() % 3 == 2)
	{
		res = s[0];
		res += s[1];
		if (1 != s.size() - 1) {
			res += ',';
		}
		for (i = 2; i < s.size(); i++)
		{
			res += s[i];
			if (i % 3 == 1 && i != s.size() - 1)
			{
				res += ',';
			}
		}
	}
	else if (s.size() % 3 == 0)
	{
		for (i = 0; i < s.size(); i++)
		{
			res += s[i];
			if (i % 3 == 2 && i!=s.size()-1)
			{
				res += ',';
			}
		}
	}
	cout << res;

	return 0;
}
//http://dl.gsu.by/task.jsp?nid=777845&cid=15