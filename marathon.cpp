#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

struct dt
{
	string s;
	int tm;
};

dt arr[5002];
bool operator<(const dt& a, const dt& b)
{
	return a.tm < b.tm;
}
int main()
{
	int i, j, k, l, n, o, p;
	//
	ifstream cin("marathon.in");
	//
	ofstream cout("marathon.out");
	cin >> n;
	for (i = 0; i < n; i++)
	{
		int c, m, s;
		cin >> c >> m >> s;
		string str;
		stringstream ss;
		ss << c;
		str = ss.str();
		stringstream ss1;
		ss1 << m;
		str = str + ' ' + ss1.str();
		stringstream ss2;
		ss2 << s;
		str = str + ' ' +  ss2.str();
		arr[i].s = str;
		arr[i].tm = 3600 * c + 60 * m + s;
	}
	sort(arr, arr + n);
	for (i = 0; i < n; i++)
	{
		cout << arr[i].s << endl;
	}

	return 0;
}